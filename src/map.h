#ifndef MAP_H
#define MAP_H


#include "datafile.h"



const char aDefaultBackground[] = "#FFFFFF";

class CMapReader
{
private:
	CDataFileReader m_Reader;
	char m_aMapname[128];
	bool m_BackgroundFound;

public:
	bool Open(const char *pMapname);
	void Generate(const char *pEntities);
	void Close();
};



#endif
