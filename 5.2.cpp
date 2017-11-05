// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <fstream>  
#include <iostream>  
#include <string>  
#include <sstream>  

using namespace std;

class CDataChain
{
public:
	CDataChain(void);
	virtual ~CDataChain(void);
	virtual void Generate(int nDepth, int nMaxLength = 0) = 0;
	size_t GetLength();
	int Find(const char* sSubStr, int nPos = 0);
	string GetSubStr(int nPos, int nLength = -1);
	const char* GetFullString();
	void SetString(string str) 
	{
		m_sChain = str;
	};
protected:
	string m_sChain;
};

class CDataSimple : public CDataChain
{
public:
	CDataSimple(void);
	~CDataSimple(void);
	void Generate(int nDepth, int nMaxLength = 0);
};

class CWorkspace 
{
public:
	CWorkspace(CDataChain& data) : m_refChain(data) {};
	~CWorkspace(void);
	void Init(int nDepth, int nLength);
	const char* GetCharString() {
		return m_refChain.GetFullString();
	}
	bool Save(string& sFilePath) {
		std::ofstream os(sFilePath);
		if (!os) { std::cerr << "Error writing to ..." << std::endl; }
		else {
			os << GetCharString();
		}
	}
	bool Load(string& sFilePath) {
		std::ifstream inFile;
		inFile.open(sFilePath);
	
		stringstream strStream;
		strStream << inFile.rdbuf();
		string str = strStream.str();
		m_refChain.SetString(str);
	}
private:
	CDataChain& m_refChain;
};

int main()
{

    return 0;
}

