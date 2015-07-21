// ic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdint.h>
#include <conio.h>
#include "StopWatch.h"
#include "mmio.h"
#include "FileIoHelper.h"


int _tmain(int argc, _TCHAR* argv[])
{

    _ASSERTE(create_very_big_file(L"big.txt", 5000));
	//_ASSERTE(create_very_big_file(L"big2.txt", 4000));
    StopWatch sw2;
    sw2.Start();

	system("copy big.txt big2.txt");
	system("exit(1)");
	//copy_file(L"big.txt", L"big2.txt");
	//_ASSERTE(file_copy_using_memory_map(L"big.txt", L"big2.txt"));
	//OpenFileContext(L"4GBplus1.bin", true, f, &l, 10);
    sw2.Stop();
    print("info] time elapsed = %f", sw2.GetDurationSecond());
    
	/*
    StopWatch sw;
    sw.Start();
    _ASSERTE(file_copy_using_read_write(L"big2.txt", L"big2.txt"));
    sw.Stop();
    print("info] time elapsed = %f", sw.GetDurationSecond());
	*/
    

    return 0;
}

