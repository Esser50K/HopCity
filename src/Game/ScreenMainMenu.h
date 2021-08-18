#pragma once

#include "../Animation.h"
#include "../Screen.h"
class ScreenMainMenu final : public Screen {
    enum class Menu {
        MainMenu,
        SettingsMenu,
    };

  public:
    ScreenMainMenu(ScreenManager* screens, const sf::RenderWindow& window);

    void onGUI() override;
    void onInput(const Keyboard& keyboard, const sf::RenderWindow& window) override;
    void onRender(sf::RenderWindow* window) override;

  private:
    Animation newgameanim;
    Animation loopedani;
    sf::Texture testTexutre;
    sf::RectangleShape testFrame;
};
