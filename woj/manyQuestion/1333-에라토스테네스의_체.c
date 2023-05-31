#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i,j,chk[5000001]={1,1}; //index가 소수이면 0을 저장한다.(0,1은 소수가 아니어서 1)
    
    for(i=2;i<=b;i++){
        if(chk[i]==0) //i가 소수이면
        {
            for(j=i*2;j<=b;j+=i) //i*2~b까지 i칸씩 지운다.
                chk[j]=1;
        }
    }

    for(i=a;i<=b;i++)
        if(chk[i]==0) printf("%d ",i);
 
    return 0;
}
