INCLUDE_PATH =  -I"D:\prod\simple_graphviz\Clib" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\time\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\runtime\logging\Clib"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\lib\msc_vc140\mtwkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = test_runner.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C31_c.obj 

OLDOBJECTS =  sp990.obj sp990d.obj ar999.obj ar999d.obj sp991.obj sp991d.obj re994.obj re994d.obj \
	it995.obj it995d.obj it996.obj it996d.obj li1008.obj li1008d.obj ar1000.obj \
	ar1000d.obj re1021.obj re1021d.obj in1016.obj in1016d.obj dy1018.obj dy1018d.obj \
	li1020.obj li1020d.obj ge992.obj ge992d.obj in998.obj in998d.obj re997.obj re997d.obj \
	cu1009.obj cu1009d.obj tr1010.obj tr1010d.obj se1002.obj se1002d.obj ar1001.obj \
	ar1001d.obj dy1013.obj dy1013d.obj bo1022.obj bo1022d.obj ta1017.obj ta1017d.obj \
	fi1006.obj fi1006d.obj un1019.obj un1019d.obj ch1015.obj ch1015d.obj ty993.obj \
	ty993d.obj ac1003.obj ac1003d.obj co1005.obj co1005d.obj bi1012.obj bi1012d.obj \
	dy1014.obj dy1014d.obj ba1004.obj ba1004d.obj bo1007.obj bo1007d.obj co1011.obj \
	co1011d.obj 

all::  Cobj31.lib

Cobj31.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

