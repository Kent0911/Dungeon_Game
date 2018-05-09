#include "Title.h"

Title::Title() {
	mc_sceneNumber = static_cast<unsigned char>(SCENE::Title);
}

Title::~Title() {

}

void Title::Update() {
	kit::Engine::g_assetsManager.GetInstance().Update();
}

void Title::Render() {
	kit::Engine::g_assetsManager.GetInstance().Render();
}