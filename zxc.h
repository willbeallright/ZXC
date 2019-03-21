// zxc.h: interface for the zxc class.


#if !defined(AFX_ZXC_H__217E3FD5_DBDA_4514_8141_D9433BE83244__INCLUDED_)
#define AFX_ZXC_H__217E3FD5_DBDA_4514_8141_D9433BE83244__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif 

class zxc  
{
public:
	zxc();
	virtual ~zxc();

};

#endif 
#include<iostream>
using namespace std;
 
int f(int n, int m) {
	if (m == 1 || n == m) {
		return 1;
	}
	else {
		return  f(n - 1, m - 1) + m*f(n - 1, m);
	}
}
 
int main() {
	int n, m;
	printf("请输入n与m：");
	scanf("%d%d", &n, &m);
	printf("得出的结果为:%d\n", f(n, m));
	return 0;
}
//对这个递归方法算时间复杂性不是很懂，有点蒙蔽
