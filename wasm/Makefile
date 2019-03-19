# clang --target=wasm32-unknown-unknown-wasm  -c *.c
# wasm-ld --no-entry --allow-undefined           *.o -o build.wasm

# CC=/home/pi/bin/llvm/bin/bin/clang
# LD=/home/pi/bin/llvm-project/lld/build/bin/wasm-ld

OBJECTS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))


all : build


build : build.wasm


build.wasm : $(OBJECTS)
	wasm-ld --no-entry --allow-undefined           $(OBJECTS) -o build.wasm


#kiss_fft.o : kiss_fft.c kiss_fft.h _kiss_fft_guts.h
#	clang --target=wasm32-unknown-unknown-wasm  -c $<

%.o : %.cpp *.hpp *.h
	clang --target=wasm32-unknown-unknown-wasm  -c $<


clean :
	rm *.o
