#pragma once

#include "../Animation.h"
#include "../Screen.h"
#include "Camera.h"
#include "Map.h"
#include "World.h"
#include <functional>
// Main Game Class
class ScreenGame final : public Screen {
  public:
    ScreenGame(ScreenManager* screens);

    void onGUI(nk_context* nuklear) override;
    void onInput(const Keyboard& keyboard, const sf::RenderWindow& window) override;
    void onEvent(const sf::Event& e) override;
    void onUpdate(const sf::Time& dt) override;
    void onRender(sf::RenderWindow* window) override;

  private:
    sf::RectangleShape m_selectionRect;
    sf::Texture m_selectionTexture;
    sf::Texture m_selectionRedTexture;

    sf::Image m_tileCorners;

    sf::Vector2i m_selectedTile;
    bool m_mousedown = false;
    sf::Mouse::Button m_buttonPressed;

    int m_worldSize = 64;

    Map m_map;
    Camera m_camera;

    // Editor
    sf::Vector2i m_editStartPosition;
    sf::Vector2i m_editPivotPoint;
    sf::Vector2i m_editEndPosition;
    bool m_quadDrag = false;
};
