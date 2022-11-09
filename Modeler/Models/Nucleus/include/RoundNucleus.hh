/*----------------------
Copyright (C): Henri Payno, Axel Delsol, 
Laboratoire de Physique de Clermont UMR 6533 CNRS-UCA

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See LICENSE.md for further details
----------------------*/
#ifndef ROUND_NUCLEUS_HH
#define ROUND_NUCLEUS_HH

#include "Nucleus.hh"
#include "InformationSystemManager.hh"
#include "GeometrySettings.hh"

#ifdef CONVERT_TO_G4
	#include "G4Orb.hh"
	#include "G4LogicalVolume.hh"
#endif

using namespace Settings::Geometry;
using namespace XML::CPOP_Flag;

////////////////////////////////////////////////////////////////////////
/// \brief define the round nucleus; the simplest form possible
/// @author Henri Payno
////////////////////////////////////////////////////////////////////////
template <typename Kernel, typename Point, typename Vector>
class RoundNucleus : public Nucleus<Kernel, Point, Vector>
{
public:
	/// \brief constructor
	RoundNucleus(double, Point, eNucleusPosType);
	/// \brief destructor
	~RoundNucleus();

	/// \brief origin getter
	Point getOrigin() const 				{ return origin;};
	/// \brief origin setter
	void setOrigin(Point o)					{ origin = o; };

	/// \brief return the area of the nucleus
	// double getArea() const;	///<\todo
	/// \brief radius setter
	void setRadius(double r)				{ radius = r; };
	/// \brief radius getter
	double getRadius() const 				{ return radius;};
	/// \brief return the approximation generated on the nucleus
	double getApproximatedVolume()			{ return approximatedVolume;};
	/// \brief set the approximation
	void setApproximatedVolume(double a)	{ approximatedVolume = a;};
	/// \brief return a random spot on the nucleus
	/// \warning will return a point based on the theorical representation - a sphere - to be compliante with Geant4. For mesh export in OFF format can include a gap because nuclei are represented by triangular meshes.
	Point getSpotOn() const;
	/// \brief return a random spot on the nucleus
	/// \warning will return a point based on the theorical representation - a sphere - to be compliante with Geant4. For mesh export in OFF format can include a gap because nuclei are represented by triangular meshes.
	Point getSpotIn() const;
	/// \brief return the points definig the shape
	std::vector<Point> getShapePoints()	const;
	
	/// \brief return the statistic of the mesh for a mesh type given.
	Kernel getMeshVolume(MeshOutFormats::outputFormat meshType) const;
	/// \warning must be in correlation with the R treatment.
	virtual QString addStatsData() const;
	/// \brief inform about the statistics exported by the meitter
	virtual QString writeStatsHeader() const ;
	/// \brief print cell information (used also to save the cell on a .txt file)
	virtual void writeAttributes(QXmlStreamWriter&) const;

	/// \brief return true if point is in the nucleus
	virtual bool hasIn(Point) const;

#ifdef CONVERT_TO_G4
	/// \brief return the G4 entity corresponding
	G4PVPlacement* convertToG4Entity(QString name, G4LogicalVolume* motherVolume, G4Material* pNucleusMat, bool pCheckOverlapse = false) const;
	/// \brief return the G4 entity corresponding
	G4LogicalVolume* convertToG4LogicalVolume(QString name, G4Material* pNucleusMat) const;
#endif

private:
	double radius;				///< \brief the radius of the nucleus
	Point origin;				///< \brief the origin of the cell
	double approximatedVolume;	///< \brief true if approximate by a triangle
	
};

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// \param pRadius the radius of the nucleus
	/// \param pOrigin the origin of the nucleus
	/// \param pPosType the type of position the nucleus have in the cell
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	RoundNucleus<Kernel, Point, Vector>::RoundNucleus(double pRadius, Point pOrigin, eNucleusPosType pPosType):
		Nucleus<Kernel, Point, Vector>(ROUND, pPosType),
		radius(pRadius),
		origin(pOrigin)
	{

	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	RoundNucleus<Kernel, Point, Vector>::~RoundNucleus()
	{

	}

	/// \cond
	#ifdef CONVERT_TO_G4
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// \param name The name to give to the G4 entities
	/// \param motherVolume The mother volume is any
	/// \param pNucleusMat The material to set on the nucleus
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	G4PVPlacement* RoundNucleus<Kernel, Point, Vector>::convertToG4Entity(QString, G4LogicalVolume*, G4Material*, bool) const
	{
		InformationSystemManager::getInstance()->Message(InformationSystemManager::CANT_PROCESS_MES, "convertor not created for this kind of template manager", "RoundNucleus");
		return NULL;
	}

	template<>
	G4PVPlacement* RoundNucleus<double, Point_3, Vector_3>::convertToG4Entity(QString name, G4LogicalVolume* motherVolume, G4Material* pNucleusMat, bool) const;

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// \param name The name to give to the G4 entities
	/// \param motherVolume The mother volume is any
	/// \param pNucleusMat The material to set on the nucleus
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	G4LogicalVolume* RoundNucleus<Kernel, Point, Vector>::convertToG4LogicalVolume(QString , G4Material*) const
	{
		InformationSystemManager::getInstance()->Message(InformationSystemManager::CANT_PROCESS_MES, "convertor not created for this kind of template manager", "RoundNucleus");
		return NULL;
	}

	template<>
	G4LogicalVolume* RoundNucleus<double, Point_3, Vector_3>::convertToG4LogicalVolume(QString name, G4Material* pNucleusMat ) const;
	/// \endcond

	#endif // CONVERT_TO_G4

	////////////////////////////////////////////////////// getSpots //////////////////////////////////////////////////////////
	/// \return Point The requested spot on the nucleus.
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	Point RoundNucleus<Kernel, Point, Vector>::getSpotOn() const
	{
		InformationSystemManager::getInstance()->Message(InformationSystemManager::CANT_PROCESS_MES, "unable to generate a spot for this kind of template parameter", "RoundNucleus");
		return Point();
	}

	template<>
	Point_2 RoundNucleus<double, Point_2, Vector_2>::getSpotOn() const;

	template<>
	Point_3 RoundNucleus<double, Point_3, Vector_3>::getSpotOn() const;


	////////////////////////////////////////////////////// getSpots //////////////////////////////////////////////////////////
	/// \return Point The requested spot in the nucleus.
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	Point RoundNucleus<Kernel, Point, Vector>::getSpotIn() const
	{
		InformationSystemManager::getInstance()->Message(InformationSystemManager::CANT_PROCESS_MES, "unable to generate a spot for this kind of template parameter", "RoundNucleus");
		return Point();
	}

	template<>
	Point_2 RoundNucleus<double, Point_2, Vector_2>::getSpotIn() const;

	template<>
	Point_3 RoundNucleus<double, Point_3, Vector_3>::getSpotIn() const;


	////////////////////////////////////////////////////// getShapePoints ////////////////////////////////////////////////////
	/// \return std::vector<Point>> The point defining the shape.
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	std::vector<Point> RoundNucleus<Kernel, Point, Vector>::getShapePoints() const
	{
		InformationSystemManager::getInstance()->Message(InformationSystemManager::CANT_PROCESS_MES, "unable to generate shape points for this kind of template parameter", "RoundNucleus");
		return std::vector<Point>();
	}

	template<>
	std::vector<Point_2> RoundNucleus<double, Point_2, Vector_2>::getShapePoints() const;

	template<>
	std::vector<Point_3> RoundNucleus<double, Point_3, Vector_3>::getShapePoints() const;	

	////////////////////////////////////////////////////// getMeshStats ///////////////////////////////////////////////////:
	/// \param pFormat the format we want the volume for
	/// \return Kernel The mesh volume
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	Kernel RoundNucleus<Kernel, Point, Vector>::getMeshVolume(MeshOutFormats::outputFormat pFormat) const
	{
		InformationSystemManager::getInstance()->Message(InformationSystemManager::CANT_PROCESS_MES, "unable to generate mesh statistics for this kind of template parameter", "RoundNucleus");
		return -1.;
	}

	/// \param pFormat the format we want the volume for
	/// \return Kernel The mesh volume
	template<>
	double RoundNucleus<double, Point_2, Vector_2>::getMeshVolume(MeshOutFormats::outputFormat pFormat) const;

	/// \param pFormat the format we want the volume for
	/// \return Kernel The mesh volume
	template<>
	double RoundNucleus<double, Point_3, Vector_3>::getMeshVolume(MeshOutFormats::outputFormat pFormat) const;


	////////////////////////////////////////////////////// addStatsData ///////////////////////////////////////////////////:
	/// \return the stats to add to the file
	template <typename Kernel, typename Point, typename Vector>
	QString RoundNucleus<Kernel, Point, Vector>::addStatsData() const
	{
		return ( QString::number(getRadius()) );
	}

	////////////////////////////////////////////////////// writeStatsHeader ///////////////////////////////////////////////////:
	/// \return the stats to add to the file
	template <typename Kernel, typename Point, typename Vector>
	QString RoundNucleus<Kernel, Point, Vector>::writeStatsHeader() const
	{
		return ( Settings::Statistics::Nucleus_Radius_flag );
	}

	////////////////////////////////////////////////////// writeAttributes ///////////////////////////////////////////////////:
	/// \param writer
	template <typename Kernel, typename Point, typename Vector>
	void RoundNucleus<Kernel, Point, Vector>::writeAttributes(QXmlStreamWriter& writer) const
	{
		writer.writeAttribute(radius_flag, QString::number(getRadius()));
	}

	////////////////////////////////////////////////////// hasIn ///////////////////////////////////////////////////
	/// \param pt the point to check to know is is inside or outside
	/// \return true is the point is inside the nucleus
	////////////////////////////////////////////////////// hasIn ///////////////////////////////////////////////////
	template <typename Kernel, typename Point, typename Vector>
	bool RoundNucleus<Kernel, Point, Vector>::hasIn(Point pt) const
	{
		return(CGAL::squared_distance(pt, origin) <= (radius*radius) );
	}

#endif // ROUND_NUCLEUS_HH