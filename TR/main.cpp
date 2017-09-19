#include <iostream>

using namespace std;


int main()
{

    int A[50][50];
    int i,j,m,n;

    cout<<"FILAS: ";
    cin>>m;
    cout<<"COLUMNAS: ";
    cin>>n;
/*-----------FORMAR MATRIZ-------------------------*/
              for(i=0;i<m;i++)
              {
              for(j=0;j<n;j++)
              {
              cout<<"A["<<i<<"]"<<"["<<j<<"]=";
              cin>>A[i][j];
              }
              }


/*-------------MOSTRAR MATRIZ--------------------------*/
       cout<<" Matriz A:   \n";
       {
       for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)

       {

       cout<<"\t"<<A[i][j];
       }
       cout<<"\n";
       }
       cout<<"\n";
       }

/*---------------------------------------------------------*/
       int o,op,fn,ari,md,mdb,fnl;

       for(i=0;i<m-1;i++)
       {
           for(j=0;j<n-1;j++){
            if(i==0){
                   o=A[i][j];
                cout<<o;
                cout<<",";
                }
           }
       }
       for(i=0;i<m-1;i++)
       {
           for(j=0;j<n-1;j++){
            if(j=n-1)
                {
                op=A[i][j];
                cout<<op;
                cout<<",";
           }
           }
       }
       for(i=0;i<m-1;i++)
       {
           for(j=n-1;j>=0;j--){
            if(i=m-1 ){
                        fn=A[i][j];
                        cout<<fn;
                        cout<<",";
                }
           }
       }
       for(i=m-1;i>=0;i--)
       {
           for(j=0;j<n-1;j++){

             if(j==0)
                {
                    ari=A[i][j];
                    cout<<ari;
                    cout<<",";
           }
           }
       }
       for(i=1;i<m-1;i++)
       {
           for(j=0;j<n-1;j++){
            if(i==1)
                {
                md=A[i][j];
                cout<<md;
                cout<<",";
           }
           }
       }


       for(i=1;i<m-1;i++)
       {
           for(j=0;j<n-1;j++){
            if(j=n-1)
                {
              mdb=A[i][j];
                cout<<mdb;
                cout<<",";
          }
          }
      }
      for(i=m-1;i>=0;i--)
       {
           for(j=0;j<n;j++){
            if(i=2)
                {
             fnl=A[i][j];
                cout<<fnl;
                cout<<",";
        }
         }
      }



       cout<<"\n";

return 0;
}
