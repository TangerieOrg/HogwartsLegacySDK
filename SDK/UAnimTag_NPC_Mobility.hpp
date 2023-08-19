#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#pragma pack(push, 1)
class UAnimTag_NPC_Mobility : public UAnimationArchitectTagProvider {
public:
    FGameplayTagContainer AnimTags; // 0x28
    TArray<ENPC_Mobility> MobilityStates; // 0x48
    bool bAdditionallyCheckAwareState; // 0x58
    char pad_59[0x7];
    TArray<ENPC_TargetAwareState> AwareStates; // 0x60
    static UAnimTag_NPC_Mobility* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
