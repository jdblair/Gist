AC_INIT([gist], [1.0.4], [jdb@moship.net])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AC_PROG_CXX
AC_PROG_RANLIB
AM_PROG_AR

AC_SUBST([AM_CXXFLAGS], [-std=c++11])

AC_DEFINE_UNQUOTED([LINUX], [1], [building on Linux])

AC_ARG_ENABLE([fft],
        [AS_HELP_STRING([--enable-fft],
                [specify the FFT library to use: kissfft, fftw or accelerate])],
        [],
        [enable_fft=kissfft])

if test "x$enable_fft" = "xkissfft"; then
   AC_DEFINE_UNQUOTED([USE_KISS_FFT], [1], [Use kiss fft library])
   FFT_LDFLAGS=\$\(top_builddir\)/libs/kiss_fft130/libKISSFFT.a
   FFT_CPPFLAGS=-I\$\(top_srcdir\)/libs/kiss_fft130
fi
if test "x$enable_fft" = "xfftw"; then
   AC_DEFINE_UNQUOTED([USE_FFTW], [1], [Use fftw library])
   FFT_LDFLAGS=-lfftw3
fi
if test "x$enable_fft" = "xaccelerate"; then
   AC_DEFINE_UNQUOTED([USE_ACCELERATE_FFT], [1], [Use Accelerate fft library])
fi

AC_SUBST(FFT_LDFLAGS)
AC_SUBST(FFT_CPPFLAGS)

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
 libs/kiss_fft130/Makefile
 test/GistTest/Makefile
])
AC_OUTPUT
