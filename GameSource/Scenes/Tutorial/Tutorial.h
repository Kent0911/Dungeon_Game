#pragma once

#include <d3d11.h>
#include <vector>
#include <memory>

#include "../../../KitEngine/SceneManager/Scene/Scene.h"
#include "../../Configurations/GameConfiguration/GameConfiguration.h"

class Tutorial :public kit::Engine::Scene {
private:

public:
	Tutorial();
	~Tutorial();

	virtual void Update();
	virtual void Render();
};