#include<cstdio>
#include<vector>

int find(int n1,int n2){
    int count = 0;
    std::vector<int> digits(6);
    int i,r,rep,greater,c;
    while(n1<=n2){
        i = n1;
        rep = 0;
        greater =1;
        c=0;

        while(i>0){
            r=i%10;
            i/=10;
            digits[c++] = r;
            if(r==i%10)
                rep = 1;
        }
        for(i=0;i<5;i++){
            if(digits[i]<digits[i+1])
                greater =0;
        }
        if(greater&&rep)
            count++;
        n1++;
    }
    return count;
}

int main(){
    int n1,n2;
    int passwords;
    scanf("%d%d",&n1,&n2);
    passwords = find(n1,n2);
    printf("\n%d\n",passwords);
    return 0;
}
