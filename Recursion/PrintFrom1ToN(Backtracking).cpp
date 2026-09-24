f(int i, int n){
    if(i<n){
        return 0;
    }
    f(i-1, n)
    cout<<i;
}

int main(){
    int n;
    cin>>n;

    f(n,n)
}

