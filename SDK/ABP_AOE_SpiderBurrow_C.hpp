#pragma once
#include <cstdint>
#include "AMunitionType_AOESpell.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_AOE_SpiderBurrow_C : public AMunitionType_AOESpell {
public:
    USceneComponent* DefaultSceneRoot; // 0x4c8
    static ABP_AOE_SpiderBurrow_C* StaticClass();
}; // Size: 0x4d0
#pragma pack(pop)
