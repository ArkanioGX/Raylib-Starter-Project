#pragma once
#include <vector>
#include <string>
#include "GameObject.h"

using namespace std;

class Scene
{
	string sceneName;
	vector<GameObject> objectListToCreate;
	vector<GameObject*> objectList;

public:
	void Load();
	void Unload();
};

