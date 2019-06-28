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
CPPFLAGS= -I"C:/OpenModelica1.13.264bit//include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME -DOMC_MODEL_PREFIX=Mixer1 -DOMC_NUM_MIXED_SYSTEMS=0 -DOMC_NUM_LINEAR_SYSTEMS=6 -DOMC_NUM_NONLINEAR_SYSTEMS=6 -DOMC_NDELAY_EXPRESSIONS=0 -DOMC_NVAR_STRING=0
LDFLAGS=-L"C:/OpenModelica1.13.264bit//lib//omc" -L"C:/OpenModelica1.13.264bit//lib" -Wl,--stack,16777216,-rpath,"C:/OpenModelica1.13.264bit//lib//omc" -Wl,-rpath,"C:/OpenModelica1.13.264bit//lib"   -fopenmp -Wl,-Bstatic -lregex -ltre -lintl -liconv -lexpat -lomcgc -lpthread -loleaut32 -limagehlp -lhdf5 -lz -lszip -Wl,-Bdynamic  -Wl,-Bstatic -lSimulationRuntimeC -Wl,-Bdynamic -Wl,-Bstatic -lomcgc -lregex -ltre -lintl -liconv -lexpat -static-libgcc -luuid -loleaut32 -lole32 -limagehlp -lws2_32 -llis -lumfpack -lklu -lcolamd -lbtf -lamd  -lsundials_idas -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lquadmath -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -lopenblas -lcminpack -Wl,-Bdynamic -lwsock32 -Wl,-Bstatic -lstdc++ -Wl,-Bdynamic 
DIREXTRA=-L"C:/OMChemSimGUI/SimulationFiles"
MAINFILE=Mixer1.c
MAINOBJ=Mixer1.o
CFILES=Mixer1_functions.c Mixer1_records.c \
Mixer1_01exo.c Mixer1_02nls.c Mixer1_03lsy.c Mixer1_04set.c Mixer1_05evt.c Mixer1_06inz.c Mixer1_07dly.c \
Mixer1_08bnd.c Mixer1_09alg.c Mixer1_10asr.c Mixer1_11mix.c Mixer1_12jac.c Mixer1_13opt.c Mixer1_14lnz.c \
Mixer1_15syn.c Mixer1_16dae.c Mixer1_17inl.c 

OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) Mixer1.makefile Mixer1_literals.h Mixer1_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that Mixer1_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) Mixer1_functions.h Mixer1_literals.h $(OFILES)
	$(CC) -I. -o Mixer1$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) $(DIREXTRA)   $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
clean:
	@rm -f Mixer1_records.o $(MAINOBJ)

bundle:
	@tar -cvf Mixer1_Files.tar $(GENERATEDFILES)