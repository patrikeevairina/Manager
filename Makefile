OBJS=manager.o main.o

manager: $(OBJS)
		g++ -std=c++11 -g -o $@ $^

.cpp.o:
		g++ -std=c++11 -I. -g -c -o $@ $<

clean:
		rm -f *.o manager

