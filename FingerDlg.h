
// FingerDlg.h : ͷ�ļ�
//

#pragma once
#include"CZKFPEngX.h"//����ָ�Ʋɼ���SDK
#include "afxwin.h"

#include<direct.h>//for_mkdir()
#define TEMP_DIR "temp\\" //��ʱ�ļ��У����ڴ��ָ�����ǰ�������м䴦����
#define DB_DIR   "Database\\"//ָ�ƿ��ļ���
#define DB_INDEX_TXT "Database\\index.txt" //ָ�ƿ������ļ�




//CFingerDlg �Ի���
class CFingerDlg : public CDialogEx
{
// ����
public:
	CFingerDlg(CWnd* pParent = NULL);	// ��׼���캯��
	~CFingerDlg();
	CZKFPEngX m_zkfpEng;

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINGER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	DECLARE_EVENTSINK_MAP()
	afx_msg void OnImageReceivedZkfpengx(BOOL FAR * AImageValid);
public:
	afx_msg void OnBnClickedBtnExit();
	CStatic m_staticInfo;
	CStatic m_picCtrl1;
	CStatic m_picCtrl2;

	CStatic m_picCtrl3,m_picCtrl4, m_picCtrl5, m_picCtrl6, m_picCtrl7, m_picCtrl8, m_picCtrl9, m_picCtrl10, m_picCtrl11, m_picCtrl13;
	CString m_name;
	CString m_name1;
	long m_minuCount;


	afx_msg void OnBnClickedBtnConnect();
	afx_msg void OnBnClickedDisconnect();
	afx_msg void OnBnClickedBtnCapture();
	afx_msg void OnBnClickedBtnStep1();
	afx_msg void OnBnClickedBtnDatabase();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedBtnAddImage();
	afx_msg void OnBnClickedBtnRegister();
	afx_msg void OnBnClickedBtnMatchimage();
	afx_msg void OnBnClickedBtnIdentify();
	void OnDestroy();
};

//3.6.1
void InitDatabase();//��������ʼ��ָ�ƿ�
void InitFile(char* filename);//��������ʼ���ļ�