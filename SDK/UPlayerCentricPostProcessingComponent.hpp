#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UPlayerCentricPostProcessingComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    float PlayerEyeDistanceSameThreshold; // 0xd0
    bool bIncludeBlendables; // 0xd4
    char pad_d5[0xb];
    FPostProcessSettings PostProcessSettings; // 0xe0
    float Priority; // 0x6d0
    bool bInVolumeList; // 0x6d4
    char pad_6d5[0xb];
    static UPlayerCentricPostProcessingComponent* StaticClass();
}; // Size: 0x6e0
#pragma pack(pop)
