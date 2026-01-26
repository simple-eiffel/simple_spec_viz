INCLUDE_PATH =  -I"D:\prod\simple_graphviz\Clib" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\time\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\library\runtime\logging\Clib"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Ox -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Ox -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -I"C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 25.02 Standard\studio\spec\win64\lib\msc_vc140\mtfinalized.lib"
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
.SUFFIXES: .x .xpp .cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

.x.obj:
	$(X2C) $< $*.c
	$(CC) $(CFLAGS) -c $*.c
	$(RM) $*.c

.xpp.obj:
	$(X2C) $< $*.cpp
	$(CPP) $(CPPFLAGS) -c $*.cpp
	$(RM) $*.cpp

.x.c:
	$(X2C) $< $*.c

.xpp.cpp:
	$(X2C) $< $*.cpp

OBJECTS = big_file_C8_c.obj 

OLDOBJECTS =  po352.obj po351.obj st358.obj st362.obj im357.obj im361.obj re360.obj re353.obj \
	re356.obj po350.obj st355.obj rt387.obj im354.obj da394.obj eq396.obj co372.obj \
	da391.obj ti389.obj da380.obj da392.obj en381.obj un383.obj en382.obj js368.obj \
	js363.obj js367.obj si371.obj js366.obj js369.obj js370.obj js365.obj js364.obj \
	js386.obj da390.obj ti388.obj da393.obj fi379.obj me385.obj gc384.obj ma398.obj \
	ma399.obj ma397.obj kl378.obj uc395.obj uc376.obj uc375.obj uc374.obj uc373.obj 

all::  Cobj8.lib

Cobj8.lib: $(OBJECTS) Makefile
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

