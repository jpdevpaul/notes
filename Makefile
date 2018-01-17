CPP = $(wildcard funcs/*.cpp rdata/*.cpp data/*.cpp bss/*.cpp)
OBJ = $(CPP:.cpp=.o)

all: $(OBJ) storm.o

%.o: %.cpp
	clang -I ./ -c -m32 -o $@ $<

storm.o: storm.h
	clang -I ./ -c -m32 -o $@ $<

.PHONY: all clean

clean:
	rm -f funcs/*.o rdata/*.o data/*.o bss/*.o *.o
