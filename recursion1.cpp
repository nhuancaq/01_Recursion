#include <iostream>
using namespace std;

long int factorial(int ); //Prototipo de la funciion

int main(){
    int n;
    cout<<"Calcule el factorial de un numero:"<<endl;

    do{
        cout<<"Digite un numero:"<<endl;
        cin>>n;

        if(n < 0)
        cout<<"Error "<<endl;

    } while(n < 0);
    cout<<endl<<n<<" !="<<factorial(n);

    return 0;
}

long int factorial (int n){
    if((n==0) || (n==1)){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}
