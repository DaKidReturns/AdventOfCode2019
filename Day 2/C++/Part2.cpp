#include<iostream>
#include<vector>
#include<fstream>
#include<cstdio>

typedef std::vector<int>::const_iterator ConstIterator;
typedef std::vector<int>::iterator Iterator;

void readFromFile(std::fstream& f, std::vector<int>& v){
    char c;
    int n=0;
    std::vector<int> temp;
    Iterator p = v.begin();
    
    while(!f.eof()){
        f.get(c);
        
        switch(c){
            case '0':n*=10;n+=0;break;
            case '1':n*=10;n+=1;break;
            case '2':n*=10;n+=2;break;
            case '3':n*=10;n+=3;break;
            case '4':n*=10;n+=4;break;
            case '5':n*=10;n+=5;break;
            case '6':n*=10;n+=6;break;
            case '7':n*=10;n+=7;break;
            case '8':n*=10;n+=8;break;
            case '9':n*=10;n+=9;break;
            case ',':
                     v.push_back(n);
                     n=0;
                     ++p;
                     break;
        }
    }

}

int result(std::vector<int>& input,int noun,int verb){
    int i=0;
    
    input[1] = noun;
    input[2] = verb;
    
    while(input[i] != 99){
        if(input[i]==1){
            input[input[i+3]] = input[input[i+1]]+input[input[i+2]];
            i+=4;
        }
        else{ 
            if(input[i]==2){
                input[input[i+3]] = input[input[i+1]]*input[input[i+2]];
                i+=4;
            }
        }
    }
    return input[0];
}

int main(){
    std::vector<int> instruction;
    std::vector<int> temp;
    std::fstream file;
    int output;
    int flag=0;

    file.open("testcase1.txt",std::ios::in);
    if(file)
        readFromFile(file,instruction);
    /*for(Iterator p = input.begin();p != input.end();++p){
        std::cout<<*p<<std::endl;
    }*/
    
    temp = instruction;

    for(int i = 0;i<99;i++){
        for(int j = 0;j<99;j++){
            
           // std::cout<<i<<"  "<<j<<std::endl;
            output = result(instruction,i,j);
            instruction = temp; 
            if(output == 19690720){
                std::cout<<100*i+j<<std::endl;;
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    
    /*for(Iterator p = input.begin();p != input.end();++p){
        std::cout<<*p<<std::endl;
    } */
    return 0;
}
