#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool image[][M],int s,int x,int y){
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            if(sqrt(pow((n-x),2)+(pow((m-y),2))) <= s-1)
            image[n][m] = 1 ;
        }
}
}

void showImage(const bool image[][M]){
    for(int i=0;i<M+2;i++) cout<<"-";
    cout<<endl;
    for(int y = 0 ; y < 30 ; y++){
        cout<<"|";
        for(int x = 0 ; x < 70 ; x++){
            if(image[y][x] == 0){
                cout<<" ";
            }
            else if(image[y][x] == 1){
                cout<<"*";
            }
        }
        cout<<"|"<<endl;
    }
    for(int i=0;i<M+2;i++) cout<<"-";
    cout<<endl;
} 


