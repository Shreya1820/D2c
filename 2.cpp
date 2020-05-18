#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int N;
   cin>>N;

   if(N%2 == 0)
    {   
        int z=((N-2)*N)/2;
        cout<<z<<endl;
    

    for(int i=1;i<N;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            if (i + j != N+1) {
                 cout << i << ' ' << j << endl;
        }
    }
    }
    }

    else 
    {
         int p=(N-1) * (N-1) / 2 ;
         cout <<p << endl;
        for (int i = 1; i < N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                if (j != N && i + j != N) 
                    cout << i << ' ' << j << endl;
                if (j == N) 
                    cout << i << ' ' << j << endl;
            }
        }
   }


    return 0;
}
