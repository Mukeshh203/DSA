#include<iostream>
using namespace std;

// int main(){

// int i,j;
//  for(i=1; i<=5; i++){
//         for(j=1; j<=9; j++){
//             if(j>=6-i && j<=10-(6-i))
//                 cout<<"*";
//             else 
//                 cout<<" ";
       
//     }

//     cout<<endl;
// }
//      return 0;
// }

// if no. of rows are taken to be as 'n', then we'll have to generalize it as,

int main(){

int i,j,n;
cin>> n;
 for(i=1; i<=n; i++){
        for(j=1; j<=2*n-1; j++){
            if(j>=6-i && j<=10-(6-i))
                cout<<"*";
            else 
                cout<<" ";
       
    }

    cout<<endl;
}
     return 0;
}