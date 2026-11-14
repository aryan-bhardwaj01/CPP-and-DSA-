#include<iostream>
using namespace  std ;
int main (){
    int m ;
    cin >> m ;
    string words[100];
    for( int i = 0 ; i< m ; i++){
        cin >> words[i];
    }
    for(int  i  = 0 ;i < m ; i++){
        int n = words[i].length();
        if( n > 10){
            char first =words[i][0];
            char last = words[i][n-1];
            int number = n-2 ;
            cout <<first<<number<<last<<endl ;
        }
        else {
            cout <<words[i]<<endl ;
        }
       
    }
    return 0 ;
}