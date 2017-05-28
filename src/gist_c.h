
#ifdef __cplusplus
extern "C" {
#endif

    /** Construct a Gist object wrapped in a void pointer
     * @param framesize the input audio frame size
     * @param samplerate the input audio sample rate
     */
    void * gist_float_new(int framesize, int samplerate);

    /** Destructor wrapped in a c function
    * @param gist_ptr Gist context pointer
    */
    void gist_float_free(void * gist_ptr);

    //=======================================================================

    /** Process an audio frame
     * @param gist_ptr Gist context pointer
     * @param frame a pointer to an array containing the audio frame
     * @param numSamples the number of samples in the audio frame
     */
    void gist_float_processAudioFrame(void * gist_ptr, const float* frame, int num_samples);

    /** @Returns the root mean square (RMS) of the currently stored audio frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_rootMeanSquare(void *gist_ptr);

    /** @Returns the peak energy of the currently stored audio frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_peakEnergy(void *gist_ptr);

    /** @Returns the zero crossing rate of the currently stored audio frame
     * @param gist_ptr Gist context pointera
     */
    float gist_float_zeroCrossingRate(void *gist_ptr);

    //================= CORE TIME DOMAIN FEATURES =================

    /** @Returns the root mean square (RMS) of the currently stored audio frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_rootMeanSquare(void *gist_ptr);

    /** @Returns the peak energy of the currently stored audio frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_peakEnergy(void *gist_ptr);

    /** @Returns the zero crossing rate of the currently stored audio frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_zeroCrossingRate(void *gist_ptr);

    //=============== CORE FREQUENCY DOMAIN FEATURES ==============

    /** @Returns the spectral centroid from the magnitude spectrum
     * @param gist_ptr Gist context pointer
     */
    float gist_float_spectralCentroid(void *gist_ptr);

    /** @Returns the spectral crest
     * @param gist_ptr Gist context pointer
     */
    float gist_float_spectralCrest(void *gist_ptr);

    /** @Returns the spectral flatness of the magnitude spectrum
     * @param gist_ptr Gist context pointer
     */
    float gist_float_spectralFlatness(void *gist_ptr);

    /** @Returns the spectral rolloff of the magnitude spectrum
     * @param gist_ptr Gist context pointer
     */
    float gist_float_spectralRolloff(void *gist_ptr);

    /** @Returns the spectral kurtosis of the magnitude spectrum
     * @param gist_ptr Gist context pointer
     */
    float gist_float_spectralKurtosis(void *gist_ptr);

    /** @Returns the energy difference onset detection function sample for the magnitude spectrum frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_energyDifference(void *gist_ptr);

    /** @Returns the spectral difference onset detection function sample for the magnitude spectrum frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_spectralDifference(void *gist_ptr);

    /** @Returns the half wave rectified complex spectral difference onset detection function sample for the magnitude spectrum frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_spectralDifferenceHWR(void *gist_ptr);

    /** @Returns the complex spectral difference onset detection function sample for the magnitude spectrum frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_complexSpectralDifference(void *gist_ptr);

    /** @Returns the high frequency content onset detection function sample for the magnitude spectrum frame
     * @param gist_ptr Gist context pointer
     */
    float gist_float_highFrequencyContent(void *gist_ptr);


#ifdef __cplusplus
}
#endif
