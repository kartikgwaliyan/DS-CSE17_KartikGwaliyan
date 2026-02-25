#include<bits/stdc++.h>
using namespace std;
void push(int *stack,int *top, int max_size){
  if(*top == max_size-1){
        cout<<"Stack Overflow"<<endl;
      return;}
        cout<<"enter element to be pushed-->";
        int n;
        cin>>n;
        (*top)++;
        stack[*top]=n;
      
}
void pop(int *stack,int *top){
  if(*top==-1){
        cout<<"Stack Underflow"<<endl;
        return;
      }
      else{
        int item=stack[*top];
        (*top)--;
        cout<<"item popped is :"<<item<<endl;
      }
}
void display(int *stack,int *top){
  if((*top)==-1){
        cout<<"Stack is empty"<<endl;
      }
      else{
        for(int i=(*top);i>=0;i--){
          cout<<stack[i]<<endl;
        }
      }
}

int main(){
  char ch='y';
  cout<<"enter maximum size of STACK:"<<endl;
  int max_size;
  cin>>max_size;
  int *stack;
  int top=-1;
  while(ch=='y'){
  cout<<"Enter your choice: PUSH-1,POP-2,DISPLAY-3 : ";
  int choice;
  cin>>choice;
  if (choice==1)
  push(stack,&top,max_size);
  else if(choice==2)
  pop(stack,&top);
  else if(choice==3)
  display(stack, &top);
  else
  cout<<"Invalid choice"<<endl;
  cout<<"Do you want to continue(y/n): ";
  cin>>ch;
}
}

