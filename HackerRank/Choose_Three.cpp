#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int asize;
        int sum;
        cin >> asize;
        cin >> sum;
            int array[asize];
            for(int j=0; j<asize; j++){
                cin >> array[j];
            }
            int flag=0;
            for(int a=0; a<asize-2; a++){
                for(int b=a+1; b<asize-1; b++){
                    for(int c=b+1; c<asize; c++){
                        int cal = array[a] + array[b] + array[c];
                        // cout << "cal" << cal << endl;
                        if(cal==sum){
                            flag  +=1;
                            break;
                        }
                    
                    }
                    if(flag==1){
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
            }
            if (flag){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }

    }


    return 0;
}