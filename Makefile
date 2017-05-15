all: funcs rdata data bss

funcs:
	clang -I ./ -c -m32 funcs/*.cpp

rdata:
	clang -I ./ -c -m32 rdata/*.cpp

data:
	clang -I ./ -c -m32 data/*.cpp

bss:
	clang -I ./ -c -m32 bss/*.cpp

.PHONY: all clean

clean:
	rm -f *.o
