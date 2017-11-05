// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "string.h"
using namespace std;

class CDataChain
{
public:
	CDataChain(void);
	virtual ~CDataChain(void);	virtual void Generate(int nDepth, int nMaxLength = 0) = 0;	size_t GetLength();
	int Find(const char* sSubStr, int nPos = 0);
	string GetSubStr(int nPos, int nLength = -1);
	const char* GetFullString();protected:
	string m_sChain;
};

class CDataSimple : public CDataChain
{
	public:
		CDataSimple(void);
		~CDataSimple(void);
		void Generate(int nDepth, int nMaxLength = 0);
}


size_t
	CDataSimple::GetLength()
{
	return m_sChain.length();
}


const char* CDataSimple::GetFullString();
{
	return string m_sChain;
}


int Find(const char* sSubStr, int nPos = 0)
{
	string str, st="sSubStr"
		str = string m_sChain; 
	int p=stp.find(st, nPos);
	return p;

//	void handle (unsigned int pos)
//	{
//
//	}
//	void search_algorithm (char* str, char c, void (*handler)(unsigned int))
//	{
//		unsigned int N = strlen(str);
//		for (unsigned int i=0; i<N; i++)
//		{
//			if (str[i] == c)
//			{
//				handler(i);
//			}
//			else {
//				return -1;
//			}
//		}
//	}
}


void Generate(int nDepth, int nMaxLength = 0);
{
	int i = 3;
	string str = to_string(i);
}








int main()
{
	return 0;
}

