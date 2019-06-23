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
CPPFLAGS= -I"C:/OpenModelica1.13.264bit//include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME -DOMC_MODEL_PREFIX=Flowsheet -DOMC_NUM_MIXED_SYSTEMS=0 -DOMC_NUM_LINEAR_SYSTEMS=10 -DOMC_NUM_NONLINEAR_SYSTEMS=10 -DOMC_NDELAY_EXPRESSIONS=0 -DOMC_NVAR_STRING=0
LDFLAGS=-L"C:/OpenModelica1.13.264bit//lib//omc" -L"C:/OpenModelica1.13.264bit//lib" -Wl,--stack,16777216,-rpath,"C:/OpenModelica1.13.264bit//lib//omc" -Wl,-rpath,"C:/OpenModelica1.13.264bit//lib"   -fopenmp -Wl,-Bstatic -lregex -ltre -lintl -liconv -lexpat -lomcgc -lpthread -loleaut32 -limagehlp -lhdf5 -lz -lszip -Wl,-Bdynamic  -Wl,-Bstatic -lSimulationRuntimeC -Wl,-Bdynamic -Wl,-Bstatic -lomcgc -lregex -ltre -lintl -liconv -lexpat -static-libgcc -luuid -loleaut32 -lole32 -limagehlp -lws2_32 -llis -lumfpack -lklu -lcolamd -lbtf -lamd  -lsundials_idas -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lquadmath -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -lopenblas -lcminpack -Wl,-Bdynamic -lwsock32 -Wl,-Bstatic -lstdc++ -Wl,-Bdynamic 
DIREXTRA=-L"C:/OMChemSimGUI/SimulationFiles"
MAINFILE=Flowsheet.c
MAINOBJ=Flowsheet.o
CFILES=Flowsheet_functions.c Flowsheet_records.c \
Flowsheet_01exo.c Flowsheet_02nls.c Flowsheet_03lsy.c Flowsheet_04set.c Flowsheet_05evt.c Flowsheet_06inz.c Flowsheet_07dly.c \
Flowsheet_08bnd.c Flowsheet_09alg.c Flowsheet_10asr.c Flowsheet_11mix.c Flowsheet_12jac.c Flowsheet_13opt.c Flowsheet_14lnz.c \
Flowsheet_15syn.c Flowsheet_16dae.c Flowsheet_17inl.c 

OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) Flowsheet.makefile Flowsheet_literals.h Flowsheet_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that Flowsheet_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) Flowsheet_functions.h Flowsheet_literals.h $(OFILES)
	$(CC) -I. -o Flowsheet$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) $(DIREXTRA)   $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
clean:
	@rm -f Flowsheet_records.o $(MAINOBJ)

bundle:
	@tar -cvf Flowsheet_Files.tar $(GENERATEDFILES)