#pragma once
#include <cstdint>
#include "AMunitionType_SuperSonicSpell.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_SuperSonic_StealthTakedown_C : public AMunitionType_SuperSonicSpell {
public:
    USceneComponent* DefaultSceneRoot; // 0x3a0
    static ABP_SuperSonic_StealthTakedown_C* StaticClass();
}; // Size: 0x3a8
#pragma pack(pop)
