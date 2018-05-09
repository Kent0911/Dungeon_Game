#include "StartMenu.h"

StartMenu::StartMenu() {
	mc_sceneNumber = static_cast<unsigned char>(SCENE::StartMenu);
}

StartMenu::~StartMenu() {

}

void StartMenu::Update() {
	kit::Engine::g_assetsManager.GetInstance().Update();
}

void StartMenu::Render() {
	kit::Engine::g_assetsManager.GetInstance().Render();
}