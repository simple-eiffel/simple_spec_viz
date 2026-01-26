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
echo "Compiling C code in C29"
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

OBJECTS = big_file_C29_c.obj 

OLDOBJECTS =  sp954.o sp954d.o ar927.o ar927d.o na953.o na953d.o sp955.o sp955d.o \
	ar952.o ar952d.o it924.o it924d.o li936.o li936d.o ar928.o ar928d.o \
	re949.o re949d.o in944.o in944d.o to951.o to951d.o dy946.o dy946d.o \
	li948.o li948d.o ge956.o ge956d.o in926.o in926d.o re925.o re925d.o \
	cu937.o cu937d.o tr938.o tr938d.o se930.o se930d.o ar929.o ar929d.o \
	dy941.o dy941d.o bo950.o bo950d.o ta945.o ta945d.o fi934.o fi934d.o \
	un947.o un947d.o ch943.o ch943d.o ac931.o ac931d.o co933.o co933d.o \
	bi940.o bi940d.o dy942.o dy942d.o ba932.o ba932d.o bo935.o bo935d.o \
	co939.o co939d.o 

all: Cobj29.o

Cobj29.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj29.o $(OBJECTS)
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

