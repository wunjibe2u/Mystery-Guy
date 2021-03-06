#pragma once
#include "../GameManager/Texture.hpp"
#include "Collider.hpp"
#include <vector>

class LeverTurn{
public:
    // 0 : close
    // 1 : open
    LeverTurn(const std::pair<int, int>& position);
    ~LeverTurn();
    void addWall(const std::pair<int, int>&  position, int type);
    void Update(const Uint32& deltaTime);
    void Render();
    bool startReStatus();
    int timeSetStatus;
    Texture _switch;
    Collider* colliderSwitch;
    bool status;
    std::vector <std::pair< std::pair<Texture*, Collider*>, int>> walls;
private:
};    