TARGET = prog

$(TARGET): main.o lib.a
	gcc $^ -o $@

main.o: main.c
	gcc -c $< -o $@

lib.a: ponteiros.o
	ar rcs $@ $^

ponteiros.o: ponteiros.c ponteiros.h
	gcc -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)