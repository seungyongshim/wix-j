// HogeHelper.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"

extern "C" __time64_t __stdcall GetHogeDateTime()
{
	__time64_t tmCur = CTime::GetCurrentTime().GetTime();
	return tmCur;
}

