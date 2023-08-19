#pragma once
#include <cstdint>
#include "AMunitionType_AOE.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_AOE_SpiderDeathExplosion_C : public AMunitionType_AOE {
public:
    USceneComponent* DefaultSceneRoot; // 0x430
    static ABP_AOE_SpiderDeathExplosion_C* StaticClass();
}; // Size: 0x438
#pragma pack(pop)
