
// Hoge10.h : PROJECT_NAME �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"		// ���C�� �V���{��


// CHoge10App:
// ���̃N���X�̎����ɂ��ẮAHoge10.cpp ���Q�Ƃ��Ă��������B
//

class CHoge10App : public CWinAppEx
{
public:
	CHoge10App();

// �I�[�o�[���C�h
	public:
	virtual BOOL InitInstance();

// ����

	DECLARE_MESSAGE_MAP()
};

extern CHoge10App theApp;