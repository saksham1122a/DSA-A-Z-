/*
*****
****
***
**
*
*/

/* n-rows+1 =   eg. 5-1+1 = 5  stars
                    4-1+1 = 4
                    3-1+1 = 3
                    2-1+1 = 2
                    1-1+1 = 1
*/

void pattern5(int n){
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-1+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}