#pragma once
#include <cstdint>
#include "AMunitionType_AttackHitbox.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_Hitbox_Graphorn_Gallop_C : public AMunitionType_AttackHitbox {
public:
    USceneComponent* DefaultSceneRoot; // 0x470
    char pad_478[0x8];
    static ABP_Hitbox_Graphorn_Gallop_C* StaticClass();
}; // Size: 0x480
#pragma pack(pop)
