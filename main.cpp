#include <iostream>
// credit to Repo owner and Miroslav Klasna

using namespace std;
int kapacita[2];
int dzban[2];
void nalit(){
dzban[0]+=kapacita[0];
cout<< "dzban1 = "<< dzban[0]<<endl<<"dzban2 = " <<dzban[1]<<endl<<endl;
}
void vylit(){
dzban[1]=0;
cout<< "dzban1 = "<< dzban[0]<<endl<<"dzban2 = " <<dzban[1]<<endl<<endl;
}
void prelit(){
if((dzban[1]+dzban[0]) > kapacita[1]){
    dzban[0]=(dzban[0]+dzban[1]-kapacita[1]);
    dzban[1] = kapacita[1];
}
else{
    dzban[1]+=dzban[0];
    dzban[0]=0;
}
    cout<< "dzban1 = "<< dzban[0]<<endl<<"dzban2 = " <<dzban[1]<<endl<<endl;
}
int main(){
    kapacita[0]=9;
    kapacita[1]=29;
        while(true){
            nalit();
            prelit();
            if(dzban[1]==kapacita[1]){
                    vylit();
            }
            if(dzban[0]==1){
                break;
            }
        }
}
