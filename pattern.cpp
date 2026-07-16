#include<iostream>
using namespace std;

void hollowrectangle(int rows,int cols){
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        if(i==0 || j==0 || i==rows-1 || j==cols-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}
void righttriangle(int rows){
  for(int i=0;i<rows;i++){
      for(int j=0;j<i+1;j++){
          cout<<"*";
      }
       cout<<endl;
  }
}
int main(){
    int rows,col;
    cout<<"Enter no of rows : ";
    cin>>rows;
    cout<<"Enter no of columns: ";
    cin>>col;
    hollowrectangle(rows,col);
    righttriangle(rows);
    return 0;
}