#pragma once
#include <cstdint>
#include "FRagdollState.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URagdollBehaviorBase : public UDataAsset {
public:
    FRagdollState RequireStatesAlways; // 0x30
    FRagdollState RequireStatesToEnter; // 0x60
    FRagdollState RequireStatesToMantain; // 0x90
    static URagdollBehaviorBase* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
