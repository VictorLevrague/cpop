#ifndef NANOPARTICLESOURCE_HH
#define NANOPARTICLESOURCE_HH

#include <memory>
#include <unordered_map>

#include "CGAL_Utils.hh"
#include "Source.hh"
#include "CellSettings.hh"
#include "OrganellesWeight.hh"
#include "NanoparticleSourceMessenger.hh"

#include <iostream>
#include <vector>


namespace cpop {

class SpheroidRegion;

/// \brief This class is used to store nanoparticle informations for each cell
class NanoInfo {
/// Victor Levrague : functions to allow random positions for each different particle generated on a cell ///

public:
    NanoInfo(const Settings::nCell::t_Cell_3* cell, int nb_nano, int part_per_nano, const OrganellesWeight& organelle_weight)
        : cell_(cell),
          number_nano_(nb_nano),
          number_secondary_per_nano(part_per_nano)
    {
        // Pick a random organelle
        auto organelle = organelle_weight.getRandomOrganelle();

        Point_3 pos = Utils::myCGAL::to_G4(cell_->getSpotOnOrganelle(organelle));

        position_in_cell_.push_back(G4ThreeVector(pos.x(), pos.y(), pos.z()));
    }

    bool HasLeft() const { return already_generated_ < totalSecondary(); }
    void AddNanoparticle(int inc = 1) { number_nano_ += inc; }
    void AddParticlePosition(OrganellesWeight& organelle_weight)
    { auto organelle = organelle_weight.getRandomOrganelle();

    Point_3 pos = Utils::myCGAL::to_G4(cell_->getSpotOnOrganelle(organelle));

    position_in_cell_.push_back(G4ThreeVector(pos.x(), pos.y(), pos.z()));}

    void Update() { ++already_generated_; }
    int getID_NanoInfo() {return cell_->getID();}

    std::vector<G4ThreeVector> GetPosition() const {
      // G4cout<< "GetPosition called in NanoSource.hh" << G4endl;
      // G4cout<< "position in cell x : " << position_in_cell_[0].getX() << G4endl;
      // G4cout<< "position in cell y : " << position_in_cell_[0].getY() << G4endl;
      // G4cout<< "position in cell z: " << position_in_cell_[0].getZ() << G4endl;
      return position_in_cell_;}

    /// \brief Position in cell
    std::vector<G4ThreeVector> position_in_cell_;


private:

    int totalSecondary() const { return number_nano_*number_secondary_per_nano; }

    /// \brief Cell containing nanoparticles
    const Settings::nCell::t_Cell_3* cell_;
    /// \brief Number of nanoparticle in the cell
    int number_nano_ = 0;
    /// \brief Number of secondary particle to generate for one nanoparticle
    int number_secondary_per_nano = 0;
    /// \brief Number of secondary particle already generated
    int already_generated_ = 0;

};

class NanoparticleSource : public Source
{
 /// Victor Levrague : modification of the distribute function in order to set a maximum number of particles per cell, and a % of labeled cells ///
public:
    NanoparticleSource(const std::string& name, const Population& population);

    std::vector<G4ThreeVector> GetPosition() override;
    int getID_OfCell();
    void Update() override;
    bool HasLeft() override;

    /// \brief Distribute all the nanoparticles in a cell
    void Initialize() override;

    int number_nanoparticle() const;
    void setNumber_nanoparticle(int number_nanoparticle);
    void setNumber_nanoparticle_per_cell_necrosis(int number_nanoparticle_per_cell_arg);
    void setNumber_nanoparticle_per_cell_intermediary(int number_nanoparticle_per_cell_arg);
    void setNumber_nanoparticle_per_cell_external(int number_nanoparticle_per_cell_arg);
    void setCell_Labeling_Percentage_necrosis(double cell_labeling_percentage_arg);
    void setCell_Labeling_Percentage_intermediary(double cell_labeling_percentage_arg);
    void setCell_Labeling_Percentage_external(double cell_labeling_percentage_arg);

    int number_secondary_per_nano() const;
    void setNumber_secondary_per_nano(int number_secondary_per_nano);

    int number_nanoparticle_necrosis() const;
    void setNumber_nanoparticle_necrosis(int number_nanoparticle_necrosis);

    int number_nanoparticle_intermediary() const;
    void setNumber_nanoparticle_intermediary(int number_nanoparticle_intermediary);

    int number_nanoparticle_external() const;
    void setNumber_nanoparticle_external(int number_nanoparticle_external);

    void setOrganelle_weight(double pCellMembrane, double pNucleoplasm, double pNuclearMembrane, double pCytoplasm );

    std::vector<double> getOrganelle_weight();

    NanoparticleSourceMessenger& messenger();

    int total_particle() const { return number_nanoparticle_*number_secondary_per_nano_;}

    void eraseFront_position_cell()
    {
      ((current_cell_->second).position_in_cell_).erase(((current_cell_->second).position_in_cell_).begin());
    }

    /// \brief Nanoparticle repartition in each cell
    std::unordered_map<const Settings::nCell::t_Cell_3*, NanoInfo> cell_nano_;

    double emission_in_membrane_;
    double emission_in_nucleus_;
    double emission_in_nucleus_membrane_;
    double emission_cytoplasm_;

    int only_one_position_for_all_particles_on_a_cell = 0;

    std::vector<double> organelle_weight_vector;


private:
    bool is_initialized_ = false;

    /// \brief Return the number of nanoparticle to distribute in region
    int nanoparticle_in_region(const SpheroidRegion& region) const;

    /// \brief Distribute number_nano nanoparticle inside region and update the unordered map
    void distribute(int number_nano, const SpheroidRegion& region);

    /// \brief Return a position in the cell in G4 unit according to the organelle_weight probablity
    std::vector<G4ThreeVector> getPositionInCell() const;

    /// \brief Number of nanoparticle to be simulated
    int number_nanoparticle_ = 0;
    /// \brief Maximum number of nanoparticle per cell to be generated, in necrosis region
    int max_number_nanoparticle_per_cell_necrosis = 0;
    /// \brief Maximum number of nanoparticle per cell to be generated, in intermediary region
    int max_number_nanoparticle_per_cell_intermediary = 0;
    /// \brief Maximum number of nanoparticle per cell to be generated, in external region
    int max_number_nanoparticle_per_cell_external = 0;
    /// \brief Number of secondary particle to generate for one nanoparticle
    int number_secondary_per_nano_ = 0;
    /// \brief Number of nanoparticle in the necrosis region
    int number_nanoparticle_necrosis_ = 0;
    /// \brief Number of nanoparticle in the intermediary region
    int number_nanoparticle_intermediary_ = 0;
    /// \brief Number of nanoparticle in the external region
    int number_nanoparticle_external_ = 0;
    /// \brief Current cell generating nanoparticle
    std::unordered_map<const Settings::nCell::t_Cell_3*, NanoInfo>::iterator current_cell_;
    /// \brief Secondary distribution in a cell
    std::unique_ptr<OrganellesWeight> organelle_weight_;
    /// \brief Cell labeling percentage, in necrosis region
    double cell_labeling_percentage_necrosis_;
    /// \brief Cell labeling percentage, in intermediary region
    double cell_labeling_percentage_intermediary_;
    /// \brief Cell labeling percentage, in external region
    double cell_labeling_percentage_external_;

    /// \brief Messenger
    std::unique_ptr<NanoparticleSourceMessenger> messenger_;
};

}



#endif // NANOPARTICLESOURCE_HH
