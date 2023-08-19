#pragma once
#include <cstdint>
#include "EEmissiveAdaptationOverrideState.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UEmissiveAdaptationOverrideComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    float BlendInTime; // 0xd0
    float SustainTime; // 0xd4
    float BlendOutTime; // 0xd8
    float Priority; // 0xdc
    bool bInfiniteSustain; // 0xe0
    bool bAutoStart; // 0xe1
    bool bUsePriority; // 0xe2
    char pad_e3[0x1];
    float StateStartTime; // 0xe4
    EEmissiveAdaptationOverrideState State; // 0xe8
    bool bRegisteredAdaptationInterface; // 0xe9
    char pad_ea[0x6];
    static UEmissiveAdaptationOverrideComponent* StaticClass();
    void SetState(EEmissiveAdaptationOverrideState NewState);
    void Reset();
    void GetState(EEmissiveAdaptationOverrideState& CurrentState);
}; // Size: 0xf0
#pragma pack(pop)
