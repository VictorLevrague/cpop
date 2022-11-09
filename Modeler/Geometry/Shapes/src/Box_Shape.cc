/*----------------------
Copyright (C): Henri Payno, Axel Delsol, 
Laboratoire de Physique de Clermont UMR 6533 CNRS-UCA

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See LICENSE.md for further details
----------------------*/
#include "Box_Shape.hh"

#include "InformationSystemManager.hh"
// #include "DisplaySettings.hh"

#include <OpenGL_Utils.hh>

#if ( defined(WIN32) || defined(WIN64) || defined(_WIN32) || defined(_WIN64) )
	#include <windows.h>
#endif
#include <GL/gl.h>

#include <QString>
/// Specialization of Dynamic agent templates

////////////////////////////////////////////////////////////////////
/// 2D
////////////////////////////////////////////////////////////////////
template<>
void Box_Shape<double, Point_2, Vector_2>::draw() const
{
	/// \todo
}

////////////////////////////////////////////////////////////////////
/// 3D
////////////////////////////////////////////////////////////////////
template<>
void Box_Shape<double, Point_3, Vector_3>::draw() const
{
	/// \todo
}
