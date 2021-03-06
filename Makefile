#	Author: John Gibbons modified by Alex Bardas
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o tester.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o tester.o -o prog

main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

#Add needed Test.o recipe and compiler command
tester.o: tester.cpp
	g++ -g -Wall -std=c++11 -c tester.cpp
#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
