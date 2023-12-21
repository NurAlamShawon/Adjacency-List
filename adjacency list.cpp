#include<iostream>
#include<vector>
using namespace std;
int highest(int A[],int n){
    int counter=A[0];
    int high=0;
    for(int i=1; i<n;i++){
        if(A[i]>counter){
            counter=A[i];
            high=i;
        }
    }

return high;
}
int lowest (int A[],int n){
    int counter=A[0];
    int low=0;
    for(int i=1; i<n;i++){
        if(A[i]<counter){
            counter=A[i];
            low=i;
        }
    }
    return low;

}




int main(){
vector<int>List[100];
int n;
int u,v;

cout<< "enter the number of edge " ;
cin>>n;
int counter[n];
cout<<"enter the edges of vertex ";
for(int i=0;i<n;i++){
   cin>>u>>v;
   List[u].push_back(v);
    List[v].push_back(u);

}
cout<<endl<<"connected vertex are "<<endl;
int sum=0;
for(int i=0;i<n;i++){
    for(auto x:List[i]){
        cout<<x<<" ";
        sum++;
        counter[i]=sum;

    }
    sum=0;
    cout<<endl;
}

 int low=lowest(counter,n);
 int high=highest(counter,n);
 cout<<"hightest egde connected node is "<<high<<endl;
  cout<<"lowest egde connected node is "<<low<<endl;
}
