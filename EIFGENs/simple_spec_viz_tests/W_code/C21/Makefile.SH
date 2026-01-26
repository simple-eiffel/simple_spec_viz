case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C21"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$SIMPLE_EIFFEL\simple_graphviz\Clib" -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(ISE_LIBRARY)/library/runtime/logging/Clib"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = test_runner$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C21_c.obj 

OLDOBJECTS =  ty681.o ty681d.o ty682.o ty682d.o ty689.o ty689d.o ty690.o ty690d.o \
	ty683.o ty683d.o ty691.o ty691d.o na679.o na679d.o ar678.o ar678d.o \
	li663.o li663d.o re676.o re676d.o in671.o in671d.o dy673.o dy673d.o \
	ha684.o ha684d.o li675.o li675d.o cu664.o cu664d.o tr665.o tr665d.o \
	dy668.o dy668d.o bo677.o bo677d.o ta672.o ta672d.o fi661.o fi661d.o \
	ha685.o ha685d.o un674.o un674d.o ta687.o ta687d.o ch670.o ch670d.o \
	co660.o co660d.o bi667.o bi667d.o dy669.o dy669d.o rt688.o rt688d.o \
	rt680.o rt680d.o bo662.o bo662d.o ta686.o ta686d.o co666.o co666d.o \
	ki692.o ki692d.o 

all: Cobj21.o

Cobj21.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj21.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

