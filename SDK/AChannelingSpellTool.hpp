#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class UMultiFX2_Base;
class UInteractionArchitectAsset;
class AActor;
#pragma pack(push, 1)
class AChannelingSpellTool : public ASpellTool {
public:
    FBTCustomAction FlourishAction; // 0x7f0
    FBTCustomAction ChannelingAction; // 0x7fc
    TArray<UMultiFX2_Base*> TapActivateFX2; // 0x808
    TArray<UMultiFX2_Base*> ChargingFX2; // 0x818
    TArray<UMultiFX2_Base*> ChargedFX2; // 0x828
    TArray<UMultiFX2_Base*> ChargedActivateFX2; // 0x838
    TArray<UMultiFX2_Base*> RibbonFX2; // 0x848
    bool ChargeVersionAvailable; // 0x858
    char pad_859[0x7];
    TArray<UMultiFX2_Base*> ChargingMuzzleFX2; // 0x860
    TArray<UMultiFX2_Base*> ChargedMuzzleFX2; // 0x870
    TArray<UMultiFX2_Base*> EndMuzzleFX2; // 0x880
    bool DUMMY; // 0x890
    char pad_891[0x7];
    TArray<UMultiFX2_Base*> BeamFX2; // 0x898
    bool bSetTargetTrackers; // 0x8a8
    bool Dummy2; // 0x8a9
    char pad_8aa[0x6];
    FGameplayTagContainer ChargedMunitionTagContainer; // 0x8b0
    UInteractionArchitectAsset* ChargedMunitionDataAsset; // 0x8d0
    FVector BeamTarget; // 0x8d8
    char pad_8e4[0x4];
    AActor* BeamTargetActor; // 0x8e8
    char pad_8f0[0x70];
    static AChannelingSpellTool* StaticClass();
    void OnCharged();
    void OnActivateTap(AActor* Target);
    void OnActivateCharged(AActor* Target);
    bool HasMinChannelingTimeBeenMet();
}; // Size: 0x960
#pragma pack(pop)
