
#include "Gist.h"
#include "gist_c.h"

#include <vector>

void * gist_float_new(int framesize, int samplerate) {
    return new Gist<float>(framesize, samplerate);
}

void gist_float_free(void * gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    delete gist;
}

void gist_float_processAudioFrame(void * gist_ptr, const float* frame, int num_samples) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    gist->processAudioFrame(frame, num_samples);
}

float * gist_float_getMagnitudeSpectrum(void *gist_ptr, size_t *size) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    std::vector<float> spectrum = gist->getMagnitudeSpectrum();
    
    *size = static_cast<size_t>(spectrum.size());
    // this black magic works b/c vector guarantees the data is contiguous
    return &spectrum[0];
}

float gist_float_rootMeanSquare(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->rootMeanSquare();
}

float gist_float_peakEnergy(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->peakEnergy();
}

float gist_float_zeroCrossingRate(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->zeroCrossingRate();
}

float gist_float_spectralCentroid(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->spectralCentroid();
}

float gist_float_spectralCrest(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->spectralCrest();
}

float gist_float_spectralFlatness(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->spectralFlatness();
}
    
float gist_float_spectralRolloff(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->spectralRolloff();
}
    
float gist_float_spectralKurtosis(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->spectralKurtosis();
}

float gist_float_energyDifference(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->energyDifference();
}

float gist_float_spectralDifference(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->spectralDifference();
}

float gist_float_spectralDifferenceHWR(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->spectralDifferenceHWR();
}

float gist_float_complexSpectralDifference(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->complexSpectralDifference();
}

float gist_float_highFrequencyContent(void *gist_ptr) {
    Gist<float> *gist = static_cast<Gist<float>*>(gist_ptr);
    return gist->highFrequencyContent();
}
