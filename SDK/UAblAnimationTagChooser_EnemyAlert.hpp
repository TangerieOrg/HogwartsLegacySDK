#pragma once
#include <cstdint>
#include "EEnemy_AlertState.hpp"
#include "UAblAnimationTagChooser_EnemyContainer.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_EnemyAlert : public UAblAnimationTagChooser_EnemyContainer {
public:
    EEnemy_AlertState AlertState; // 0xc8
    char pad_c9[0x7];
    static UAblAnimationTagChooser_EnemyAlert* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
