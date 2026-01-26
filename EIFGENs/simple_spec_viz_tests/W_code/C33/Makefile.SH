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
echo "Compiling C code in C33"
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

OBJECTS = big_file_C33_c.obj 

OLDOBJECTS =  ty1070.o ty1070d.o ty1071.o ty1071d.o ty1076.o ty1076d.o ty1077.o \
	ty1077d.o ty1080.o ty1080d.o ty1081.o ty1081d.o ty1084.o ty1084d.o \
	ty1085.o ty1085d.o ty1072.o ty1072d.o ty1078.o ty1078d.o ty1082.o \
	ty1082d.o ty1086.o ty1086d.o co1056.o co1056d.o li1057.o li1057d.o \
	co1061.o co1061d.o li1060.o li1060d.o li1058.o li1058d.o li1059.o \
	li1059d.o rt1063.o rt1063d.o rt1064.o rt1064d.o rt1065.o rt1065d.o \
	rt1066.o rt1066d.o rt1067.o rt1067d.o rt1068.o rt1068d.o rt1069.o \
	rt1069d.o rt1075.o rt1075d.o rt1079.o rt1079d.o rt1083.o rt1083d.o \
	rt1087.o rt1087d.o rt1088.o rt1088d.o ar1073.o ar1073d.o in1062.o \
	in1062d.o st1074.o st1074d.o 

all: Cobj33.o

Cobj33.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj33.o $(OBJECTS)
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

