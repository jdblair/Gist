AUTOMAKE_OPTIONS = subdir-objects
AM_CPPFLAGS = @FFT_CPPFLAGS@
bin_PROGRAMS = GistTest
GistTest_LDADD = -lboost_unit_test_framework $(top_builddir)/src/libGist-1.0.la @FFT_LDFLAGS@
GistTest_SOURCES = main.cpp \
	Test_CoreFrequencyDomainFeatures.cpp \
	Test_CoreTimeDomainFeatures.cpp \
	Test_Gist.cpp \
	Test_MFCC.cpp \
	Test_OnsetDetectionFunction.cpp \
	Test_Pitch.cpp \
	test-signals/Test_Signals.cpp
