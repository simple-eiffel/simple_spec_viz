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
echo "Compiling C code in C30"
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

OBJECTS = big_file_C30_c.obj 

OLDOBJECTS =  ar963.o ar963d.o na989.o na989d.o re958.o re958d.o ar988.o ar988d.o \
	it959.o it959d.o it960.o it960d.o li972.o li972d.o ar964.o ar964d.o \
	re985.o re985d.o in980.o in980d.o to987.o to987d.o dy982.o dy982d.o \
	li984.o li984d.o in962.o in962d.o re961.o re961d.o cu973.o cu973d.o \
	tr974.o tr974d.o se966.o se966d.o ar965.o ar965d.o dy977.o dy977d.o \
	bo986.o bo986d.o ta981.o ta981d.o fi970.o fi970d.o un983.o un983d.o \
	ch979.o ch979d.o ty957.o ty957d.o ac967.o ac967d.o co969.o co969d.o \
	bi976.o bi976d.o dy978.o dy978d.o ba968.o ba968d.o bo971.o bo971d.o \
	co975.o co975d.o 

all: Cobj30.o

Cobj30.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj30.o $(OBJECTS)
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

