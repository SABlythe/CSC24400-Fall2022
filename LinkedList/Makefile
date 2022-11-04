CC = g++ -g -c -Wall -ansi -pedantic -std=c++20

runMe: ListNode.o LinkedList.o main.o
	g++ -o runMe ListNode.o LinkedList.o main.o

main.o: main.cpp LinkedList.hpp ListNode.hpp
	$(CC) main.cpp

LinkedList.o: LinkedList.cpp LinkedList.hpp ListNode.hpp
	$(CC) -std=c++20 LinkedList.cpp

ListNode.o: ListNode.cpp ListNode.hpp
	$(CC) ListNode.cpp

# use this rule with care
clean:
	/bin/rm -f *.o *~ runMe
