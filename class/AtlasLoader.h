#ifndef  _ATLASLOADER_H_
#define  _ATLASLOADER_H_

#include "cocos2d.h"

using namespace cocs2d;
using namespace std;

typedef _atlas{
	char name[255];
	int width;
	int height;
	Point start;
	Point end;
} Atlas;


class AtlasLoder 
{
public:
	//获得和销毁实例
	static AtlasLoder* getInstance();
	static void destroyInstance();

	//从文件加载数据
	void LoadAtlas(string filename);
	//从文件加载指定的纹理 重载
	void LoadAtlas(string filename, Texture2D* texture);

	SpriteFrame* getSpriteByName(string name);

protected:
	AtlasLoder();

	virtual bool init();
	static AtlasLoder* sharedAtlasLoder;

	Map<string, SpriteFrame*> _spriteFrames;
};



#endif