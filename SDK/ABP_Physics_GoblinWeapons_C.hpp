#pragma once
#include <cstdint>
#include "AMunitionType_Physics.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_Physics_GoblinWeapons_C : public AMunitionType_Physics {
public:
    USceneComponent* DefaultSceneRoot; // 0x408
    static ABP_Physics_GoblinWeapons_C* StaticClass();
}; // Size: 0x410
#pragma pack(pop)
