/*----------------------
Copyright (C): Henri Payno, Axel Delsol, 
Laboratoire de Physique de Clermont UMR 6533 CNRS-UCA

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See LICENSE.md for further details
----------------------*/
#include "RandomEngineManager.hh"

static RandomEngineManager* randomEngine = 0;

#include <limits> 
#include <QString>

static QString fileOutName = "randomOutput";

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
RandomEngineManager::RandomEngineManager():
	rndEngine(NULL),
	outputRandom(NULL)
{

}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
RandomEngineManager::~RandomEngineManager()
{
	delete rndEngine;
}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
RandomEngineManager* RandomEngineManager::getInstance()
{
	if(!randomEngine)
	{
		randomEngine = new RandomEngineManager();
	}
	return randomEngine;
}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
void RandomEngineManager::setEngine(CLHEP::HepRandomEngine* pEngine)
{
	assert(pEngine);
	rndEngine = pEngine;
}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
double RandomEngineManager::randd()
{
	assert(rndEngine);
	return rndEngine->flat(); 
}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
double RandomEngineManager::randd(double min, double max)
{
	if(min == max)	return min;
	return randd() * ( max - min ) + min;
}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
int RandomEngineManager::randi()
{
	assert(rndEngine);
	return (int) (randd() * std::numeric_limits<int>::max());
}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
int RandomEngineManager::randi(int min, int max)
{
    if(min == max)  return min;
    if(min > max)   return randi(max, min);
    return (min + (randi()%(max - min +1)));
}

/////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////
double RandomEngineManager::normaled(double min, double max, double medium, double standardDeviation)
{
	return -1.;
}
