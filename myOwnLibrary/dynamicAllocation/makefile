TARGET = prog

$(TARGET): main.o lib.a
	gcc $^ -o $@

main.o: main.c
	gcc -c $< -o $@

lib.a: dynamicAllocation.o
	ar rcs $@ $^

dynamicAllocation.o: dynamicAllocation.c dynamicAllocation.h
	gcc -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)