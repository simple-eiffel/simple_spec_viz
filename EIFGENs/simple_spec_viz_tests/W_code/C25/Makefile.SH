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
echo "Compiling C code in C25"
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

OBJECTS = big_file_C25_c.obj 

OLDOBJECTS =  sp803.o sp803d.o ar793.o ar793d.o na805.o na805d.o sp804.o sp804d.o \
	re798.o re798d.o it799.o it799d.o it800.o it800d.o li812.o li812d.o \
	ar794.o ar794d.o in820.o in820d.o dy822.o dy822d.o li824.o li824d.o \
	ge796.o ge796d.o in802.o in802d.o re801.o re801d.o cu813.o cu813d.o \
	tr814.o tr814d.o se806.o se806d.o ar795.o ar795d.o dy817.o dy817d.o \
	ta821.o ta821d.o fi810.o fi810d.o un823.o un823d.o ch819.o ch819d.o \
	ty797.o ty797d.o ac807.o ac807d.o co809.o co809d.o bi816.o bi816d.o \
	dy818.o dy818d.o ba808.o ba808d.o bo811.o bo811d.o co815.o co815d.o \
	kl792.o kl792d.o 

all: Cobj25.o

Cobj25.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj25.o $(OBJECTS)
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

