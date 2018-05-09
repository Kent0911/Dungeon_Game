#pragma once

#include <memory>
#include "../../Scenes/Title/Title.h"
#include "../../../KitEngine/SceneManager/Scene/Scene.h"

#define START_SCENE_NUMBER (static_cast<unsigned char>(SCENE::Title))
#define START_SCENE (std::make_shared<Title>())

#define MOVE_SPEED (0.01f)


enum class SCENE : unsigned char {
	Title,
	SelectDevice,
	Tutorial,
	StartMenu,
	GameMain,
	Result,
	Max
};

enum class DIFFICULTY {
	Tutorial,
	Easy,
	Normal,
	Hard,
	Max
};

enum class STOCK_TORCHS {
	Tutorial = 1,
	Easy = 10,
	Normal = 7,
	Hard = 5
};

enum class STOCK_LEADINGINSECT {
	Tutorial = 1,
	Easy = 3,
	Normal = 2,
	Hard = 1
};
