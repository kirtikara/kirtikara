#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    srand(time(NULL));
    int user = 0;
    int computer = 0; 
    
    cout<<"stone paper scissor game: "<<endl;

    cout<<" 1) rock "<<endl;
    
    cout<<" 2) paper "<<endl;
    
    cout<<" 3) scissor "<< endl;
    

    cin>>user;

    if(user == 1){
        cout<<" you chooose rock "<<endl;
    }
    else if(user==2){
        cout<<" you choose paper "<<endl;
}
else{
    cout<<" you choose scissor"<<endl;
}
computer=rand()%3+1;
if(computer==1){
    cout<<" cp chooses rock "<<endl;
}
else if(computer==2){
    cout<<" cp chooses paper "<<endl;

}
else{
    cout<<" cp chooses scissor "<<endl;
}


if(user == computer){
    cout<<" match tie!"<<endl;
}

else if(user==1){
    if(computer==2){
        cout<<" you lose !"<<endl;

    }
    if(computer==3){
        cout<<" you win !"<<endl;
    }
}
else if(user==2){
    if(computer==1){
        cout<<" you win !"<< endl;
    }
    if(computer==3){
        cout<<" you lose !"<<endl;
    }
}
 else if(user==3){
    if(computer==1){
        cout<<" you lose !"<<endl;
    }
    if(computer==2){
        cout<<" you win ! "<<endl;
    }
 }
 return 0;



}