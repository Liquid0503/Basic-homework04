#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   int second51=0;

    printf("您的輸入的秒數：");

    scanf("%d",&second51);

    printf("轉換的時間為=%02d時:%02d分:%02d秒\n",second51/3600%60,second51/60%60,second51%60);

 	system("pause");  

 	return 0;

}
