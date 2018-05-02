H_SRC = $(wildcard funcs/*.h rdata/*.h data/*.h bss/*.h include/*.h)
OBJ = $(H_SRC:.h=.o)

all: $(OBJ)

%.o: %.h
	clang -I ./include -c -m32 -o $@ $<

.PHONY: all clean

clean:
	rm -f funcs/*.o rdata/*.o data/*.o bss/*.o include/*.o
