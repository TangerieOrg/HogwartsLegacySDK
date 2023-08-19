#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class URagdollRecoveryAssistBehavior;
#pragma pack(push, 1)
class URagdollRecoveryAssistBehaviorProfile : public UDataAsset {
public:
    TArray<URagdollRecoveryAssistBehavior*> Behaviors; // 0x30
    static URagdollRecoveryAssistBehaviorProfile* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
