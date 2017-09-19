#include <iostream>

using namespace std;

int main()
{
    char* mnj="\nHola,\n\t Voy a terminar mis tareas!\n \t Cerrare el Facebook y WhatsApp!\nBye, \n";
    int in,d,p,l,tm=36,t=80;
    for(l=71;l<t;l++){
        if(mnj[l]!='\n'){
        cout<<mnj[l];
        }
    }
    cout <<"\n"<< endl;
    for(p=36;p<(l=71);p++){
        if(mnj[p]!='\n'){
        cout<<mnj[p];
        }
    }
    cout <<"\t"<< endl;
    for(d=7;d<(p=36);d++){
        if(mnj[d]!='\n'){
        cout<<mnj[d];
        }
    }

    cout <<"\n"<< endl;
    for(in=0;in<(d=7);in++){
        if(mnj[in]!='\n'){
        cout<<mnj[in];
        }
    }


    cout <<"\n"<< endl;
    cout <<mnj<< endl;
    return 0;
}
