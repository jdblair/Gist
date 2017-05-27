AUTOMAKE_OPTIONS = subdir-objects
AM_CPPFLAGS = @FFT_CPPFLAGS@
AM_LDFLAGS = @FFT_LDFLAGS@
noinst_LIBRARIES = libGist.a
libGist_a_SOURCES = Gist.cpp \
	core/CoreFrequencyDomainFeatures.cpp \
	core/CoreTimeDomainFeatures.cpp \
	fft/WindowFunctions.cpp \
	mfcc/MFCC.cpp \
	onset-detection-functions/OnsetDetectionFunction.cpp \
	pitch/Yin.cpp
