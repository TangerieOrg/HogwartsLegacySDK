#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class URagdollBehavior;
#pragma pack(push, 1)
class URagdollBehaviorProfile : public UDataAsset {
public:
    TArray<URagdollBehavior*> Behaviors; // 0x30
    static URagdollBehaviorProfile* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
