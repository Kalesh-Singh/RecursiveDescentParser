%.o:%.cpp
	g++ -c -g -o $@ $^

main: main.cpp Node.o
	g++ -g -o $@ $^

Node.o: Node.cpp