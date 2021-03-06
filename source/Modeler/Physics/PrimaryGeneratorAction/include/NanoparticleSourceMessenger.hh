#ifndef NANOPARTICLESOURCEMESSENGER_HH
#define NANOPARTICLESOURCEMESSENGER_HH

#include "G4UIcommand.hh"
#include "G4UIcmdWithAnInteger.hh"
#include "G4UIcmdWith3Vector.hh"

#include "MessengerBase.hh"
#include "SourceMessenger.hh"

namespace cpop {

class SourceMessenger;
class NanoparticleSource;

class NanoparticleSourceMessenger : public MessengerBase
{
  /// Victor Levrague :addition of maximum particle per cell, % of cell labeling and different positions for all particles generated on the same cell ///
public:
    NanoparticleSourceMessenger(NanoparticleSource* source);

    void BuildCommands(G4String base) override;
    void SetNewValue(G4UIcommand * command , G4String newValue) override;

private:
    NanoparticleSource* source_;

    // We choose composition over inheritancce to avoid type casting
    std::unique_ptr<SourceMessenger> source_messenger_;

    // Commands
    /// \brief Set the number of nanoparticle in the population
    std::unique_ptr<G4UIcmdWithAnInteger> total_nano_cmd_;
    /// \brief Set the number of secondary particle to be generated for one nanoparticle
    std::unique_ptr<G4UIcmdWithAnInteger> part_per_nano_cmd_;
    /// \brief Distribute the nanoparticle in the 3 regions
    std::unique_ptr<G4UIcmdWith3Vector> nano_per_region_cmd_;
    /// \brief Define the secondaries repartition in a cell
    std::unique_ptr<G4UIcommand> pos_in_cell_cmd_;
    /// \brief Maximum number of nanoparticle per cell to be generated, in each region
    std::unique_ptr<G4UIcmdWith3Vector> nb_max_nano_per_cell_cmd_;
    /// \brief Percentage of labeled cells, in each region
    std::unique_ptr<G4UIcmdWith3Vector> cell_Labeling_cmd_;
    /// \brief Set the number of nanoparticle in the population
    std::unique_ptr<G4UIcmdWithAnInteger> only_one_position_for_all_particles_on_a_cell_cmd_;

    // double emission_in_membrane_;
    // double emission_in_nucleus_;
    // double emission_in_nucleus_membrane_;
    // double emission_cytoplasm_;

};

}



#endif // NANOPARTICLESOURCEMESSENGER_HH
