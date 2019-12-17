#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct myArray{
  int *a;
  int num;
};
int initArray(myArray &Array){
  Array.a=0;
  Array.num=0;
  return 0;
}
myArray readFile(char *path){
  FILE *fp = fopen(path,"rt");
  
}
int writeFile(myArray &Array, char *path){

}
int printArray(){

}
int deleteArray(){

}
myArray copyArray(myArray Array){

}


int main()
{
 int a[n];

 cout<<sizeof(a)<<" "<<sizeof(a[0]);
}
