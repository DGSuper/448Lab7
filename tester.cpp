#include "tester.h"
tester::tester(){

}
void tester::runTester(){
  passOrFail(test1());
  passOrFail(test2());
  passOrFail(test3());
  passOrFail(test4());
  passOrFail(test5());
  passOrFail(test6());
  passOrFail(test7());
  passOrFail(test8());
  passOrFail(test9());
}
void tester::passOrFail(bool test){
  if(test == true){
    cout<<"Test Passed"<<endl;
  }
  else{
    cout<<"Test Failed"<<endl;
  }
}
bool tester::test1(){
  cout << "1) checks an empty new list: ";
  LinkedListOfInts list;
  if(list.isEmpty()==true){
    return true;
  }
  else{
    return false;
  }
}
bool tester::test2(){
  cout << "2) Checks if isEmpty returns false on a list that is not empty: ";
  LinkedListOfInts list;
  list.addFront(23);
  if(list.isEmpty() == false){
    return true;
  }
  else
  {
    return false;
  }
}
bool tester::test3(){
  cout<<"3) empty list will return a size of 0: ";
  LinkedListOfInts list;
  if(list.size() == 0){
    return true;
  }
  else{
    return false;
  }
}
bool tester::test4(){
 cout<<"4) a list with 3 ints will return a size of 3: ";
 LinkedListOfInts list;
 list.addFront(1);
 list.addFront(2);
 list.addFront(3);
 if(list.size() == 3){
   return true;
 }
 else{
   return false;
 }
}
bool tester::test5(){
  cout<<"5) checks if search returns the right index: ";
  LinkedListOfInts list;
  list.addFront(1);
  list.addFront(2);
  list.addFront(3);
  if(list.search(1) == false){
    return false;
  }
  else if(list.search(2) == false){
    return false;
  }
  else if(list.search(3) == false){
    return false;
  }
  else if(list.search(4) == true){
    return false;
  }
  else{
    return true;
  }
}
bool tester::test6(){
  cout<<"6) checks if addBack() adds the int to the end of the list: ";
  LinkedListOfInts list;
  list.addFront(3);
  list.addBack(2);
  list.addBack(1);
  if(list.toVector()[2] == 1){
    return true;
  }
  else{
    return false;
  }
}
bool tester::test7(){
  cout<<"7) checks if removeBack() removes the back correctly: ";
  LinkedListOfInts list;
  list.addFront(3);
  list.addFront(2);
  list.addFront(1);
  list.removeBack();
  if(list.toVector()[1] == 2 && list.size() == 2){
    return true;
  }
  else{
    return false;
  }
}
bool tester::test8(){
  cout<<"8) check if removeFront() removes the front int correctly: ";
  LinkedListOfInts list;
  list.addFront(3);
  list.addBack(1);
  list.addBack(2);
  list.removeFront();
  if(list.toVector()[0] == 1){
    return true;
  }
  else{
    return false;
  }
}
bool tester::test9(){
  cout<<"9) checks if addFront() adds the int to the front of the list: ";
  LinkedListOfInts list;
  list.addFront(1);
  list.addFront(2);
  list.addFront(3);
  if(list.toVector()[0] == 3){
    return true;
  }
  else{
    return false;
  }
}
