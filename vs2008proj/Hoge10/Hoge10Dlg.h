
// Hoge10Dlg.h : �w�b�_�[ �t�@�C��
//

#pragma once


// CHoge10Dlg �_�C�A���O
class CHoge10Dlg : public CDialog
{
// �R���X�g���N�V����
public:
	CHoge10Dlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^

// �_�C�A���O �f�[�^
	enum { IDD = IDD_HOGE10_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g

	void	UpdateDateTimeDisp();

// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnUpdate();
};
