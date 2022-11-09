/*----------------------
Copyright (C): Henri Payno, Axel Delsol, 
Laboratoire de Physique de Clermont UMR 6533 CNRS-UCA

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See LICENSE.md for further details
----------------------*/
#include "ENucleusType.hh"

QString getNucleusTypeName(eNucleusType type)
{
	switch(type)
	{
		case ROUND:
			return "ROUND";
		default :
			return "Unknow";
	}
}