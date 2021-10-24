#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int cht, nbracd, r, tmp_nac;
char result[8];
void code(nbracd){
    tmp_nac = nbracd;
    for(int i = 0; i<=7; i++){
        r = tmp_nac % 2;
        tmp_nac /= 2;
        sprintf(result, "%s%d", result, r);
    }
    printf("the binary word of %d is %s\n", nbracd, strrev(result));
}
void decode(nbracd){
    int nac[8], k = 7, tmp_bin =0, deci_res =0;
    tmp_bin = nbracd;
    for(int i = 7; i >= 0; i--){
        nac[i] = tmp_bin % 10;
        tmp_bin /= 10;
    }
    for(int i = 7; i >= 0; i--){
        deci_res += (nac[k-i] * pow(2, i));
    }
    printf("the decimal form of %d is %d", nbracd, deci_res);

}
int main(){
    system("cls");
    printf("Welcome in transcode programe, ");
    cond:
    printf("choose the type of transcoding: 1.code\t2.decode\n");
    scanf("%d", &cht);
    if(cht == 1 || cht == 2){
        if(cht == 1){
            printf("Enter a number:");
            scanf("%d", &nbracd);
            code(nbracd);
        }else{
            printf("Enter a binary:");
            scanf("%d", &nbracd);
            decode(nbracd);
        }
    }else{
        printf("Wrong!! Please, ");
        goto cond;
    }

}

