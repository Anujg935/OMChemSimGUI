# Makefile generated by OpenModelica
# Platform: win64

# Simulations use -O3 by default
CC=gcc
CXX=g++
LINK=g++ -shared -Xlinker --export-all-symbols -fPIC
EXEEXT=.exe
DLLEXT=.dll
CFLAGS_BASED_ON_INIT_FILE=
DEBUG_FLAGS=-Os
CFLAGS=$(CFLAGS_BASED_ON_INIT_FILE) $(DEBUG_FLAGS) -falign-functions -fno-ipa-pure-const -mstackrealign -msse2 -mfpmath=sse ${MODELICAUSERCFLAGS}   
CPPFLAGS= -I"C:/OpenModelica1.13.264bit//include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME -DOMC_MODEL_PREFIX=splitter1 -DOMC_NUM_MIXED_SYSTEMS=0 -DOMC_NUM_LINEAR_SYSTEMS=6 -DOMC_NUM_NONLINEAR_SYSTEMS=6 -DOMC_NDELAY_EXPRESSIONS=0 -DOMC_NVAR_STRING=0
LDFLAGS=-L"C:/OpenModelica1.13.264bit//lib//omc" -L"C:/OpenModelica1.13.264bit//lib" -Wl,--stack,16777216,-rpath,"C:/OpenModelica1.13.264bit//lib//omc" -Wl,-rpath,"C:/OpenModelica1.13.264bit//lib"   -fopenmp -Wl,-Bstatic -lregex -ltre -lintl -liconv -lexpat -lomcgc -lpthread -loleaut32 -limagehlp -lhdf5 -lz -lszip -Wl,-Bdynamic  -Wl,-Bstatic -lSimulationRuntimeC -Wl,-Bdynamic -Wl,-Bstatic -lomcgc -lregex -ltre -lintl -liconv -lexpat -static-libgcc -luuid -loleaut32 -lole32 -limagehlp -lws2_32 -llis -lumfpack -lklu -lcolamd -lbtf -lamd  -lsundials_idas -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lquadmath -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -lopenblas -lcminpack -Wl,-Bdynamic -lwsock32 -Wl,-Bstatic -lstdc++ -Wl,-Bdynamic 
DIREXTRA=-L"C:/OMChemSimGUI/Simulator"
MAINFILE=splitter1.c
MAINOBJ=splitter1.o
CFILES=splitter1_functions.c splitter1_records.c \
splitter1_01exo.c splitter1_02nls.c splitter1_03lsy.c splitter1_04set.c splitter1_05evt.c splitter1_06inz.c splitter1_07dly.c \
splitter1_08bnd.c splitter1_09alg.c splitter1_10asr.c splitter1_11mix.c splitter1_12jac.c splitter1_13opt.c splitter1_14lnz.c \
splitter1_15syn.c splitter1_16dae.c splitter1_17inl.c 

OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) splitter1.makefile splitter1_literals.h splitter1_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that splitter1_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) splitter1_functions.h splitter1_literals.h $(OFILES)
	$(CC) -I. -o splitter1$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) $(DIREXTRA)   $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
clean:
	@rm -f splitter1_records.o $(MAINOBJ)

bundle:
	@tar -cvf splitter1_Files.tar $(GENERATEDFILES)