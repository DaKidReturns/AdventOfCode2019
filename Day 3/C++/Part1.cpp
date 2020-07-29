#include<iostream>
#include<fstream>
#include<vector>
#define MATSIZE 4000
struct point{
    int x;
    int y;
}

typedef std::vector<std::vector<int>> matrix;

void readFile(std::fstream& f,matrix& m;){
    int i=0,j=0;
    char c;
    int num=0;
    while(!f.eof()){
    //The initial position is 0,0   
        f.get(c);
        switch(c){
        
        }
    }
}

/*Going right will increment x by a positive value and going left
 * will decrement x. 
 * Going up will increment y and going down will decrement y
 */

/*After getting the inputs 
 */

int main(){
    matrix m1;
    std::fstream f;

    f.open("input.txt",ios::in);
    readFile(f,m1)

}
