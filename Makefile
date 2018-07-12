H_SRC = $(wildcard funcs/*.h rdata/*.h data/*.h bss/*.h include/*.h include/storm/*.h include/windows/*.h)
OBJ = $(H_SRC:.h=.o)

all: $(OBJ)

%.o: %.h
	clang -I ./include -c -m32 -o $@ $<

.PHONY: all clean

clean:
	@$(RM) -v funcs/*.o rdata/*.o data/*.o bss/*.o include/storm/*.o include/windows/*.o include/*.o
