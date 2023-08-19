#pragma once
#include <cstdint>
#include "AMunitionType_Hitbox.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_Hitbox_Dugbog_Lunge_C : public AMunitionType_Hitbox {
public:
    USceneComponent* DefaultSceneRoot; // 0x470
    char pad_478[0x8];
    static ABP_Hitbox_Dugbog_Lunge_C* StaticClass();
}; // Size: 0x480
#pragma pack(pop)
