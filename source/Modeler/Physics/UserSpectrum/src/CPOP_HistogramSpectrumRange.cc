#include "CPOP_HistogramSpectrumRange.hh"
#include "Randomize.hh"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CPOP_HistogramSpectrumRange::CPOP_HistogramSpectrumRange(pair<G4float, G4double> pLowBound, pair<G4float, G4double> pHighBound):
	CPOP_SpectrumRange(pLowBound.first, pHighBound.first)
{
	energyLowBound = pLowBound.second;
	energyHighBound = pHighBound.second;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CPOP_HistogramSpectrumRange::~CPOP_HistogramSpectrumRange()
{

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief return a random value between energyLowBound and energyHighBound
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
G4double CPOP_HistogramSpectrumRange::computeEnergy() const
{
	return ( energyLowBound + G4UniformRand()*(energyHighBound - energyLowBound));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief return a random value between energyLowBound and energyHighBound
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
G4double CPOP_HistogramSpectrumRange::GetEnergy(G4double rnd) const
{
	// cout << "[Histo-CPOP]" << "proba between : [ " << probaLowBound << "- " << probaHighBound << "] , energy between : [" << energyLowBound << ", " << energyHighBound << " ]" << endl;
	return ( energyLowBound + rnd*(energyHighBound - energyLowBound));
}