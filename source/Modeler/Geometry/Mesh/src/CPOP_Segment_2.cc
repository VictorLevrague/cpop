/*----------------------
Copyright (C): Henri Payno, Axel Delsol, 
Laboratoire de Physique de Clermont UMR 6533 CNRS-UCA

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See LICENSE.md for further details
----------------------*/
#include "CPOP_Segment_2.hh"

////////////////////////////////////////////////////////////////////////////////////:
///
////////////////////////////////////////////////////////////////////////////////////:
CPOP_Segment_2::CPOP_Segment_2(Segment_2 seg, bool pRefinable):
	segment(seg),
	refinable(pRefinable)
{

}

////////////////////////////////////////////////////////////////////////////////////:
///
////////////////////////////////////////////////////////////////////////////////////:
CPOP_Segment_2::~CPOP_Segment_2()
{

}

////////////////////////////////////////////////////////////////////////////////////:
/// \brief return the potential win.
////////////////////////////////////////////////////////////////////////////////////:
double CPOP_Segment_2::getPotentialWin() const
{
	if(!refinable)
	{
		return 0.;
	}else
	{
		/// this is used to know the mesh reffinement. This kind of segment ar between two point which are set on a arc circle.
		/// that we want to reffine.
		return segment.squared_length();
	}
}

////////////////////////////////////////////////////////////////////////////////////:
///
////////////////////////////////////////////////////////////////////////////////////:
bool CPOP_Segment_2::operator < (const CPOP_Segment_2& segment2) const
{
	return (this->getPotentialWin() < segment2.getPotentialWin());
}
