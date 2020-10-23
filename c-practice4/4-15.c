/*---显示身高范围和间隔由输入的整数值进行控制。---*/
 
#include <stdio.h>
 
int main(void)
{
	int st, en, j, height;
	double weight;
	
	printf("开始数值（cm）:");
	scanf("%d",&st);
	
	printf("结束数值（cm）:");
	scanf("%d",&en);
	
	printf("间隔数值（cm）:");
	scanf("%d",&j);
	
	for (height = st; height <= en; height+=j) {
		weight = (height - 80) * 0.9;
		printf("%dcm   %.2fkg\n",height,weight);
	}
	
	 return 0;
}
