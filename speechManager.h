#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<string>
#include <functional>
#include<numeric>
#include<fstream>
#include "speaker.h"

using namespace std;

//�ݽ�������
class SpeechManager
{
public:

	//���캯��
	SpeechManager();


	//��������
	~SpeechManager();


	// ��ʾ����
	void showMenu();

	// �˳�����
	void exitSystem();

	//��ʼ������
	void initSpeech();

	//��ʼ������12��ѡ��
	void createSpeaker();

	//��ʼ���� - �������̿���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�������
	void showScore();

	//�����¼
	void saveRecord();

	//��ռ�¼
	void clearRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ����÷�
	void showRecord();


	//����ѡ�� ����  12��
	vector<int>v1;

	//��һ�ֽ�������  6��
	vector<int>v2;

	//ʤ��ǰ��������  3��
	vector<int>vVictory;

	//��ű�� �Լ���Ӧ�� ����ѡ�� ����
	map<int, Speaker> m_Speaker;

	// ��������
	int m_Index;

	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;
};