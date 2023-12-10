#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

int main()
{
  Student* student = new Student(12345);
  Node* startNode = new Node(student);
  cout << startNode->getStudent()->id << endl;
  return 0;
}
