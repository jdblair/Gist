AUTOMAKE_OPTIONS = subdir-objects
AM_CPPFLAGS = @FFT_CPPFLAGS@
AM_LDFLAGS = @FFT_LDFLAGS@
lib_LTLIBRARIES = libGist-1.0.la
libGist_1_0_la_SOURCES = Gist.cpp \
	core/CoreFrequencyDomainFeatures.cpp \
	core/CoreTimeDomainFeatures.cpp \
	fft/WindowFunctions.cpp \
	mfcc/MFCC.cpp \
	onset-detection-functions/OnsetDetectionFunction.cpp \
	pitch/Yin.cpp \
	gist_c.cpp
include_HEADERS = Gist.h gist_c.h
