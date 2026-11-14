#include<iostream>
#include<vector>
using namespace std ;

int main (){
    int n ; 
    cin >> n ;
    vector<long> result ;
    int k ;
    cin >> k ;
    
    for( int i = 1 ; i <= n ; i++){
        if( i == 1 ) result.push_back(i);
        if( i % 2 != 0) result.push_back(i);
    }
    for(int i = 2  ; i <= n ; i++){
        if(  i % 2 == 0 ) result.push_back(i);
    }
    
    cout << result[k] ; 
    return 0 ;
}