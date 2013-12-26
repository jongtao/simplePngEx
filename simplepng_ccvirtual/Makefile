CC= g++
OBJS= test.o simplepng.o
CPPFLAGS= -Wall -ansi

testpng: $(OBJS)
	g++ -o $@ $^ $(CPPFLAGS) -lpng

o: $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS) testpng core
