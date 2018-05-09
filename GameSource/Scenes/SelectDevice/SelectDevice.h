#pragma once

#include <d3d11.h>
#include <vector>
#include <memory>

#include "../../../KitEngine/SceneManager/Scene/Scene.h"
#include "../../Configurations/GameConfiguration/GameConfiguration.h"
#include "../../Configurations/SystemConfiguration/SystemConfiguration.h"
#include "../../../Library/DirectXTK/include/SpriteFont.h"

class SelectDevice :public kit::Engine::Scene {
private:
	char										mc_selectDevice;
	std::unique_ptr<DirectX::SpriteFont>		muptr_Font;

public:
	SelectDevice();
	~SelectDevice();

	virtual void Update();
	virtual void Render();
};