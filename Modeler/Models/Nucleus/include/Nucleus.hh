/*----------------------
Copyright (C): Henri Payno, Axel Delsol, 
Laboratoire de Physique de Clermont UMR 6533 CNRS-UCA

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See LICENSE.md for further details
----------------------*/
#ifndef NUCLEUS_POSITION_TYPE_HH
#define NUCLEUS_POSITION_TYPE_HH

#ifdef WITH_GDML_EXPORT
	#define CONVERT_TO_G4
#endif 
#ifdef WITH_GEANT_4
	#define CONVERT_TO_G4
#endif

#ifdef CONVERT_TO_G4
	#include "G4PVPlacement.hh"
	#include "G4Material.hh"
#endif

#include "ENucleusPosType.hh"
#include "ENucleusType.hh"
#include "MeshOutFormats.hh"
#include "StatsDataEmitter.hh"
#include "Writable.hh"

#include <QString>
#include <vector>

using namespace XML::CPOP_Flag;

////////////////////////////////////////////////////////////////////////
/// \brief define the possible spatial position for nucleus.
/// @author Henri Payno
////////////////////////////////////////////////////////////////////////
template<typename Kernel, typename Point, typename Vector>
class Nucleus : public Writable, public StatsDataEmitter
{
public:

	/// \brief constructor
	Nucleus(eNucleusType, eNucleusPosType);
	/// \brief destructor
	virtual ~Nucleus()	{};
	/// \brief return the area of the nucleus
	// virtual double getArea() const = 0;	// <\todo
	/// \brief return a random spot on the nucleus
	virtual Point getSpotOn() const = 0;
	/// \brief return a random spot in the nucleus
	virtual Point getSpotIn() const = 0;
	/// \brief return the points definig the shape
	virtual std::vector<Point> getShapePoints() const = 0;
	/// \brief return the statistic of the mesh for a mesh type given.
	virtual Kernel getMeshVolume(MeshOutFormats::outputFormat meshType) const = 0;
	/// \brief will return cell mesh specificities for R. 
	/// By default : no specifities.
	/// \warning must be in correlation with the R treatment.
	virtual QString addStatsData() const		= 0;
	/// \brief inform about the statistics exported by the meitter
	virtual QString writeStatsHeader() const 	= 0;
	/// \todo : write nucleus shape
	/// \brief print cell information (used also to save the cell on a .txt file)
	virtual void write(QXmlStreamWriter&) const;
	/// \brief print cell information (used also to save the cell on a .txt file)
	virtual void writeAttributes(QXmlStreamWriter&) const = 0;

	/// \brief pos type setter
	void setPositionType(eNucleusPosType pType)	{ posType = pType;};
	/// \brief pos type getter
	eNucleusPosType getPositionType() const 	{ return posType;};		
	/// \brief return true if point is in the nucleus
	virtual bool hasIn(Point) const = 0;

#ifdef CONVERT_TO_G4
	/// \brief return the G4 entity corresponding
	virtual G4PVPlacement* convertToG4Entity(QString name, G4LogicalVolume* motherVolume, G4Material* pNucleusMat, bool pCheckOverlapse = false) const = 0;
	/// \brief return the G4 entity corresponding
	virtual G4LogicalVolume* convertToG4LogicalVolume(QString name, G4Material* pNucleusMat) const = 0;
#endif

private:
	eNucleusType shapeType;				///< \brief the type of shape : round, ellipsoidal...
	eNucleusPosType posType;			///< \brief the type of position of the nucleus inside the cell : barycenter, random...

};

////////////////////////////////////////////// Implementation //////////////////////////////////////////////
template<typename Kernel, typename Point, typename Vector>
Nucleus<Kernel, Point, Vector>::Nucleus(eNucleusType pNucleusType, eNucleusPosType pNucleusPosType):
	Writable(),
	StatsDataEmitter(),
	shapeType(pNucleusType),
	posType(pNucleusPosType)
{

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \param writer where to redirect writing of information
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename Kernel, typename Point, typename Vector>
void Nucleus<Kernel, Point, Vector>::write(QXmlStreamWriter& writer) const
{
	writer.writeStartElement(nucleus_flag);
	writer.writeAttribute(nucleus_pos_type_flag, QString::number(posType));
	writer.writeAttribute(nucleus_shape_type_flag, QString::number(shapeType));
	writeAttributes(writer);
	writer.writeEndElement(); // nucleus_flag
}

#endif // NUCLEUS_POSITION_TYPE_HH