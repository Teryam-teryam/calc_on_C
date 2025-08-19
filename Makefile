cc = gcc
target = calculator
src = calc.c
flags = -o
obj = calc.o

all: $(target)

$(target): $(obj)
	$(cc) $(flags) $@ $^
	
$(obj): $(src)
	$(cc) -c $(src)
	
clean:
	rm -rf $(obj) $(target)
