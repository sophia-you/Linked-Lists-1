#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

/*
 * Name | Sophia You
 * Date | December 10 2023
 * Description | Linked lists part 1 - creating the frame work for a node-based
 student list program. Instead of using a vector to store student info, we will be storing it in lists. 
 */
using namespace std;


// function prototypes
void addNode(Student* newstudent, Node* &startNode);
void printNode(Node* nextNode, Node* &startNode);

int main()
{
  Student* bobbie = new Student(12345);
  Student* henriette = new Student(67890);
  Student* eustacus = new Student(13579);
  Node* startNode = NULL; // this is the "head" node
  addNode(bobbie, startNode);
  printNode(startNode, startNode);
  addNode(henriette, startNode);
  printNode(startNode, startNode);
  addNode(eustacus, startNode);
  printNode(startNode, startNode);
  return 0;
}

/**
 * this function creates a new node and adds it to the current linked list.
 * @param newstudent | this is the student value added to the
 * new node.
 */
void addNode(Student* newstudent, Node* &startNode)
{
  Node* currentNode = startNode;
  if (currentNode == NULL) // if the current node is the first node in the list
    {
      startNode = new Node(newstudent); // add a value to the start node
    }
  else // the current node is not the first node
    {
      // keep going til you get the last node on the list
      while (currentNode->getNext() != NULL)
	{
	  currentNode = currentNode->getNext(); // keep on going thru the list
	}
      // once you get to a NULL node, you've reached the end of a list
      // add new node here
      currentNode->setNext(new Node(newstudent));
    }
}

void printNode(Node* nextNode, Node* &startNode)
{
  if (nextNode == startNode)
    {
      cout << "Node List:" << endl;
    }
  if (nextNode != NULL)
    {
      cout << nextNode->getStudent()->id << endl;
      printNode(nextNode->getNext(), startNode);
    }
}
