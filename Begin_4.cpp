#include <iostream>

 using namespace std;

int main() {
	 printf("Hello If Else\n");
 /*
   User enters integer number
   пользователь вводит целое число
   Program write out if what number is even or odd
   программа выводит ,чётный или не чётный это номер
 */	 
  int number;
  cout<<" Please  enter whole number : " ;//пожалуста введите целое число
  cin>> number;
  if(number%2==0) 
  {
  	cout<<"You have entered even number " <<endl;//ты ввёл чётное число
  }
  else 
  {
    cout<<"You have entered odd number " <<endl;//ты ввёл нечётное число	
  }
  
  cout<<"Thenk. Bay .";
  	 
  system("pause>0");	 
}



