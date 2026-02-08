#include <iostream>
class IntVector {
  private:
    int s;
    int capacity;
    int *content; 
  public:
    IntVector(std::initializer_list<int> starting_list) {
      s = starting_list.size();
      //std::cout << "The size of the jawn" << size << std::endl;
      capacity = s;
      int *init_content = new int[s];
      const int *first_element = starting_list.begin();
      for (int i = 0; i < s; i++) {
        int jawn_to_add = *(first_element + 1* i);
        init_content[i] = jawn_to_add;
      }
      content = init_content;
    }
    IntVector() {
      s = 0;
      capacity = 0;
      content = new int[capacity];
    }
    void push_back(int item) {
      if (s == capacity) { // we need more room
        capacity *= 2;
        int *new_content = new int[capacity];
        for (int i = 0; i < s; i++) {
          new_content[i] = content[i];
        }
        delete content;
        content = new_content;
      }
      int *new_item = new int;
      *new_item = item;
      content[s] = *new_item;
      s++;
    } 
    int get(int index) {
      return content[index];
    }
    int front() {
      //return the first element
      return content[0];
    }
    int back() {
      //return the last element
      return content[s - 1];
    }
    int size() {
      return s;
    }
};