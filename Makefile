%.o:%.cpp
	g++ -c -g -o $@ $^

main: main.cpp
	g++ -g -o $@ $^