TARGET = prog

$(TARGET): main.o lib.a
	gcc $^ -o $@

main.o: main.c
	gcc -c $< -o $@

lib.a: filesHandling.o
	ar rcs $@ $^

filesHandling.o: filesHandling.c filesHandling.h
	gcc -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)