#pragma once
#include <cstdint>
#include "EEnemy_WeaponSource.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_EnemyWeapon : public UAblAnimationTagChooser {
public:
    EEnemy_WeaponSource WeaponSource; // 0x50
    char pad_51[0x7];
    static UAblAnimationTagChooser_EnemyWeapon* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
