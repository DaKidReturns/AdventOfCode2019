#include<iostream>
#include<fstream>
#include<string>
#include<cmath>

int changeString(const std::string& str){
    int n =0;
    for(int i=0;str[i]!='\0';++i){
        n*=10;
        switch(str[i]){
            case '0':n+=0;break;
            case '1':n+=1;break;
            case '2':n+=2;break;
            case '3':n+=3;break;
            case '4':n+=4;break;
            case '5':n+=5;break;
            case '6':n+=6;break;
            case '7':n+=7;break;
            case '8':n+=8;break;
            case '9':n+=9;break;
        }
    }
    return n;
}

int countFuel(int n){
    float f = n/3;
    f = std::floor(f);
    if(f==0)
        return 0;
    n=(int)f-2;
    return n;
}

int main(){
    std::ifstream fin;
    std::string line;
    int n;
    int sum = 0;

    fin.open("Part1input.txt",std::ios::in);
    while(!fin.eof()){
            n=0;
            getline(fin,line);
            n = changeString(line);
            sum+=countFuel(n);
            //std::cout<<n<<std::endl;
    }
    fin.close();
    std::cout<<sum<<std::endl;
    //std::cout<<"fuel for test cases == "<<countFuel(12)<<'\n'<<countFuel(14)<<'\n'<<countFuel(1969)<<std::endl;
    return 0;
}
