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
echo "Compiling C code in C31"
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

OBJECTS = big_file_C31_c.obj 

OLDOBJECTS =  sp990.o sp990d.o ar999.o ar999d.o sp991.o sp991d.o re994.o re994d.o \
	it995.o it995d.o it996.o it996d.o li1008.o li1008d.o ar1000.o \
	ar1000d.o re1021.o re1021d.o in1016.o in1016d.o dy1018.o dy1018d.o \
	li1020.o li1020d.o ge992.o ge992d.o in998.o in998d.o re997.o re997d.o \
	cu1009.o cu1009d.o tr1010.o tr1010d.o se1002.o se1002d.o ar1001.o \
	ar1001d.o dy1013.o dy1013d.o bo1022.o bo1022d.o ta1017.o ta1017d.o \
	fi1006.o fi1006d.o un1019.o un1019d.o ch1015.o ch1015d.o ty993.o \
	ty993d.o ac1003.o ac1003d.o co1005.o co1005d.o bi1012.o bi1012d.o \
	dy1014.o dy1014d.o ba1004.o ba1004d.o bo1007.o bo1007d.o co1011.o \
	co1011d.o 

all: Cobj31.o

Cobj31.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj31.o $(OBJECTS)
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

