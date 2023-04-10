#include <iostream>
using namespace std;

//tree
struct node {
  int data;
  node* left;
  node* right;

  node(int data1) {
    data = data1;
    left = NULL;
    right = NULL;
      }
};
