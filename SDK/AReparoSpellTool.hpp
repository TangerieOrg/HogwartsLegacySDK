#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
class UMultiFX2_Base;
class UObject;
class UActorComponent;
#pragma pack(push, 1)
class AReparoSpellTool : public ASpellTool {
public:
    TArray<UMultiFX2_Base*> FailedFX2; // 0x7f0
    TArray<UMultiFX2_Base*> EndFX2; // 0x800
    bool bOnlyHitTarget; // 0x810
    char pad_811[0x3];
    float TargetQueryCapsuleRadius; // 0x814
    float TargetQueryCapsuleOffsetX; // 0x818
    char pad_81c[0xbc];
    static AReparoSpellTool* StaticClass();
    void ReparoExpired();
    void ReparoCancel(UObject* InInstigator);
    static void DisableReparoAOE(bool Disable);
    void ARepairComplete(UActorComponent* Comp);
}; // Size: 0x8d8
#pragma pack(pop)
