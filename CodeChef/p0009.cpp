//[inComplete]Problem statement - https://www.codechef.com/NCC2019/problems/NCC1902

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int delta (long long z){
        long long digisum = 0;
        if (z<10) return z;
        else{
                while (z>0){
                        digisum += z%10;
                        z = z/10;
                }
                return delta(digisum);
        }
        
}

int main() {

        int q,n1,n2,a,n1count=0,n2count=0;
        long long l,r;

        scanf("%d",&q);
        for(int i=0;i<q;i++){
            n1count=0,n2count=0;
            //cin >> l >> r >> n1 >> n2;
            scanf("%lld %lld %d%d",&l,&r,&n1,&n2);
            for(long long j=l;j<=r;j++){
                    a = delta(j);
                    (a == n1) ? n1count++ : 1;
	                (a == n2) ? n2count++ : 1;
            }
            if(n1count == n2count)
                    printf("Draw\n");
            else if(n1count > n2count )
                    printf("Onkar\n");
                 else
                    printf("Krushna\n");
                        
                    
       }
	return 0;
}