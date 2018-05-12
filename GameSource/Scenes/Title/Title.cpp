#include "Title.h"

Title::Title() {
	mc_sceneNumber = static_cast<unsigned char>(SCENE::Title);
	g_player.GetInstance().SetSceneNumber(mc_sceneNumber);
	mc_font.SetStr(GAME_TITLE);
	mc_font.SetPosition(kit::vec2{ g_windowSize.x / 2 , g_windowSize.y / 2 });
}

Title::~Title() {

}

void Title::Update() {
	kit::Engine::g_assetsManager.GetInstance().Update();
}

void Title::Render() {
	kit::Engine::g_assetsManager.GetInstance().Render();
	mc_font.DisplayFont(DirectX::Colors::White);
}