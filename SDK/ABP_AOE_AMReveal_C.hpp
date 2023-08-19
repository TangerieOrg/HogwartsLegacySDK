#pragma once
#include <cstdint>
#include "AMunitionType_AOE_MultiFX.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_AOE_AMReveal_C : public AMunitionType_AOE_MultiFX {
public:
    USceneComponent* DefaultSceneRoot; // 0x660
    static ABP_AOE_AMReveal_C* StaticClass();
}; // Size: 0x668
#pragma pack(pop)
