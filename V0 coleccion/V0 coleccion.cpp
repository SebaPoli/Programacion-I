#include <vcl.h>
#include <windows.h>

#pragma hdrstop
#pragma argsused

#include <tchar.h>

#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int collection [10] = {1,2,3,4,5,6,7,8,9,10};
	int result [10];
	for (int index = 0; index < 10; index++)
	{
		if (collection [index] < 3)
			result [index] = collection [index];
	}
	for (int index = 0; index < 10; index++)
	{
		std::cout << result [index] << std::endl;
	}
    system("pause");
	return 0;
}
