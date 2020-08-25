TARGET = prog

$(TARGET): main.o lib.a
	gcc $^ -o $@

main.o: main.c
	gcc -c $< -o $@

lib.a: str.o
	ar rcs $@ $^

str.o: str.c str.h
	gcc -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)