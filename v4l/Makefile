CC = arm-none-linux-gnueabi-gcc
#CC = arm-linux-androideabi-gcc

CFLAGS = -Wall 
LDFLAGS = -static 

#CFLAGS = -Wall -I$(HOME)/lichee/buildroot/output/staging/usr/include
#LDFLAGS = -L$(HOME)/lichee/buildroot/output/target/usr/lib 
#-lSDL -lSDL_mixer -lmad -lSDL_ttf -lSDL_gfx -lpng -ljpeg -lfreetype -lSDL_image -lts -lm -ldirectfb -lfusion -ldirect -lz

EXE = v4l2-example


.PHONY : all
all: $(EXE)


$(EXE) : $(EXE).o
	$(CC) 	$(LDFLAGS) $(EXE).o -o $(EXE)

.c.o:
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY : all
clean : 
	-rm *.o	$(EXE)
