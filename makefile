objects = program.o
nestedFork: $(objects)
	gcc -o nestedFork $(objects)
$(objects): program.c program.h
	gcc -c program.c
.PHONY: clean run
clean:
	rm nestedFork $(objects) 
run:
	./nestedFork
usage:
	@echo make
	@echo make run
