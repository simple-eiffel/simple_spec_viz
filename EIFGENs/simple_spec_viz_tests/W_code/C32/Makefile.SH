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
echo "Compiling C code in C32"
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

OBJECTS = big_file_C32_c.obj 

OLDOBJECTS =  sp1026.o sp1026d.o ar1029.o ar1029d.o fu1055.o fu1055d.o na1025.o \
	na1025d.o na1042.o na1042d.o sp1027.o sp1027d.o ar1024.o ar1024d.o \
	ar1041.o ar1041d.o ar1030.o ar1030d.o in1037.o in1037d.o to1023.o \
	to1023d.o to1040.o to1040d.o dy1052.o dy1052d.o ha1048.o ha1048d.o \
	st1047.o st1047d.o li1039.o li1039d.o ge1028.o ge1028d.o se1032.o \
	se1032d.o ar1031.o ar1031d.o dy1034.o dy1034d.o ta1053.o ta1053d.o \
	ha1049.o ha1049d.o un1038.o un1038d.o ta1051.o ta1051d.o mm1054.o \
	mm1054d.o ar1043.o ar1043d.o ch1036.o ch1036d.o bi1033.o bi1033d.o \
	dy1035.o dy1035d.o ta1050.o ta1050d.o ar1046.o ar1046d.o qu1044.o \
	qu1044d.o di1045.o di1045d.o 

all: Cobj32.o

Cobj32.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj32.o $(OBJECTS)
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

