#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
class UCurveFloat;
class UMultiFX2_Base;
class UMaterialParameterCollection;
class URevealComponent;
class AActor;
#pragma pack(push, 1)
class ARevelioSpellTool : public ASpellTool {
public:
    float FadeTime; // 0x7f0
    int32_t MaxRevealsPerFrame; // 0x7f4
    bool bRevealHiddenOnCastOnly; // 0x7f8
    char pad_7f9[0x3];
    float StandardRange; // 0x7fc
    UCurveFloat* StandardRadiusPercentAtTime; // 0x800
    float HogwartsRange; // 0x808
    char pad_80c[0x4];
    UCurveFloat* HogwartsRadiusPercentAtTime; // 0x810
    float OverlandRange; // 0x818
    char pad_81c[0x4];
    UCurveFloat* OverlandRadiusPercentAtTime; // 0x820
    float BroomRange; // 0x828
    float BroomFieldGuideHotspotRange; // 0x82c
    UCurveFloat* BroomRadiusPercentAtTime; // 0x830
    float HiddenObjectRange; // 0x838
    float IntroHiddenObjectRange; // 0x83c
    float BaseRangeScale; // 0x840
    char pad_844[0x4];
    TArray<UMultiFX2_Base*> GlobalFX2; // 0x848
    TArray<UMultiFX2_Base*> InteractiveFX2; // 0x858
    TArray<UMultiFX2_Base*> ImportantFX2; // 0x868
    TArray<UMultiFX2_Base*> HiddenFX2; // 0x878
    TArray<UMultiFX2_Base*> HiddenFarAwayFX2; // 0x888
    TArray<UMultiFX2_Base*> EnemyFX2; // 0x898
    TArray<UMultiFX2_Base*> TaggedFX2; // 0x8a8
    UMaterialParameterCollection* ShowOccludedMaterialParameterCollection; // 0x8b8
    FName ShowOccludedParameter; // 0x8c0
    float CurrentRadius; // 0x8c8
    float CurrentInnerRadius; // 0x8cc
    TArray<URevealComponent*> RevelioComponents; // 0x8d0
    TArray<AActor*> IgnoreActorArray; // 0x8e0
    char pad_8f0[0x50];
    TArray<void*> HotspotArray; // 0x940
    TArray<void*> HiddenFarAwayArray; // 0x950
    char pad_960[0x50];
    static ARevelioSpellTool* StaticClass();
    void RevealHiddenActor(AActor* InActor);
    float GetHiddenObjectRange();
    float GetFieldGuideHotspotRange();
    float GetCurrentOuterRadius();
    float GetCurrentInnerRadius();
    void BeginRevealFade();
}; // Size: 0x9b0
#pragma pack(pop)
