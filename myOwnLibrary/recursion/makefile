TARGET = prog

$(TARGET): main.o lib.a
	gcc $^ -o $@

main.o: main.c
	gcc -c $< -o $@

lib.a: recursao.o
	ar rcs $@ $^

recursao.o: recursao.c recursao.h
	gcc -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)