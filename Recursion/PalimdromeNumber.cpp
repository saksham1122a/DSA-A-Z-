void f(int i){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return f(i+1);
}
int main(){
    f(0);
}