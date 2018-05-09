#pragma once

#include <d3d11.h>
#include <vector>
#include <memory>

#include "../../../KitEngine/SceneManager/Scene/Scene.h"
#include "../../Configurations/GameConfiguration/GameConfiguration.h"
#include "../../Player/Player.h"

class Title :public kit::Engine::Scene {
private:

public:
	Title();
	~Title();

	virtual void Update();
	virtual void Render();
};