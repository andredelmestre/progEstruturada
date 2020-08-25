TARGET = prog

$(TARGET): main.o lib.a
	gcc $^ -o $@

main.o: main.c
	gcc -c $< -o $@

lib.a: funcoes.o
	ar rcs $@ $^

funcoes.o: funcoes.c funcoes.h
	gcc -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)