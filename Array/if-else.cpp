#include<iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;
    if(savings>=10000){
        if(savings>=100000){
            cout<<"You are rich\n"<<endl;
        }
        else{
            cout<<"You are broke"<<endl;
        }
    }
    else if(savings>=11000){
        cout<<"You are eligible for loan at 2% \n"<<endl;
    }
    else if (savings>=5000){
        cout<<"You are eligible for loan at 6% \n"<<endl;
    }
    else if (savings>=2000){
        cout<<"You are eligible for loan at 10% \n"<<endl;
    }
    else{
        cout<<"You are not eligible for loan \n"<<endl;
    }
    return 0;
}