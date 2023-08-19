#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FMultiFX2Handle.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class APlayer_AttackIndicator : public AActor {
public:
    TArray<UMultiFX2_Base*> ParryableBeamFX2; // 0x248
    TArray<UMultiFX2_Base*> UnblockableBeamFX2; // 0x258
    TArray<UMultiFX2_Base*> PerfectParryBeamFX2; // 0x268
    bool bBeamGoesAttackerToTarget; // 0x278
    char pad_279[0x2f];
    static APlayer_AttackIndicator* StaticClass();
    void ReceivePerfectParry(FMultiFX2Handle InParraybleFX2Handle, FMultiFX2Handle InPerfectParryFX2Handle);
    void ReceiveIndicatorStop(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle);
    void ReceiveIndicatorStart(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle, float InEstimatedTime);
}; // Size: 0x2a8
#pragma pack(pop)
