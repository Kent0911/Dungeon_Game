#include "Result.h"

Result::Result() {
	mc_sceneNumber = static_cast<unsigned char>(SCENE::Result);
}

Result::~Result() {

}

void Result::Update() {
	kit::Engine::g_assetsManager.GetInstance().Update();
}

void Result::Render() {
	kit::Engine::g_assetsManager.GetInstance().Render();
}