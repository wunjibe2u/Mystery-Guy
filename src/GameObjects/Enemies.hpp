#pragma once
#include "../GameManager/Texture.hpp"
#include "Animation.hpp"
#include "Collider.hpp"

// 1: Worm
// 2: Slime
// 3: Mushroom

class Enemies: public Texture{
public: 
    Enemies(int type, const std::pair<int, int>& start, const std::pair<int, int>& end, const std::pair<int, int>& position);
    ~Enemies();
    void Update(const Uint32& deltaTime);
    void Render();
    Collider* getCollider();
    int checkDie;
    bool deleteBot;
    float speed;
    bool faceRight;
    int _Move;
    int type;
private:
    Animation* animation = nullptr;
    Collider* collider = nullptr;
    std::pair<int, int> start, end;
    std::pair<int, int> frameLimit;
};
