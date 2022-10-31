runMe: ListNode.o LinkedList.o main.o
	g++ -o runMe ListNode.o LinkedList.o main.o

main.o: main.cpp LinkedList.hpp ListNode.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 main.cpp

LinkedList.o: LinkedList.cpp LinkedList.hpp ListNode.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 LinkedList.cpp

ListNode.o: ListNode.cpp ListNode.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 ListNode.cpp

clean:
	/bin/rm -f *.o *~ runMe
