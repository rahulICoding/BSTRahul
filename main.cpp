#include <iostream>
#include <cstring>
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
  };
};

int main() {
  char input[10];
  bool run = true;
  node* tree = NULL;
  while (run) {
    cout << "" << endl;
    cout << "What do you want to do (add, delete, generate, print, search or quit)" << endl;
  
    cin.get(input, 10);
    cin.ignore(1, '\n');

    if (strcmp(input, "add")) {
      int inputN = 0;
      bool run1 = true;
      while (run1) {
        cin >> inputN;
        cin.ignore(1, '\n');
        node* newNode = new node(inputN);
        if (tree == NULL) {
          tree = newNode;
        }
        else {
          node * current = tree;
          while (true) {
            if (data < current->data) {
              if (ccurrent->left == NULL) {
                current->left = newNode;
                break;
              }
              else {
                current = current->left;
              }
            }
            else {
              if (current->right == NULL) {
                current->right = newNode;
                break;
              }
              else {
                current = current->right;
              }
            }
          }
        }
      }
    }
    else if(strcmp(input, "delete")) {
      
    }
  }

}
