#pragma once
#include <cstdint>
#include "ATransfigurationPreviewActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class USceneComponent;
class UTimelineComponent;
class UParticleSystemComponent;
#pragma pack(push, 1)
class ABP_MultivanishmentPreviewActor_C : public ATransfigurationPreviewActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x430
    USceneComponent* CentredMeshRoot; // 0x438
    float ScaleDownTimeline_Scale_B912410A49773DD88DD5FA97F560C186; // 0x440
    ETimelineDirection::Type ScaleDownTimeline__Direction_B912410A49773DD88DD5FA97F560C186; // 0x444
    char pad_445[0x3];
    UTimelineComponent* ScaleDownTimeline; // 0x448
    static ABP_MultivanishmentPreviewActor_C* StaticClass();
    void ScaleDownTimeline__FinishedFunc();
    void ScaleDownTimeline__UpdateFunc();
    void OnVanishStart0();
    void OnPreviewMeshLoaded0();
    void ExecuteUbergraph_BP_MultivanishmentPreviewActor(int32_t EntryPoint, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent, bool CallFunc_K2_AttachToComponent_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter_1, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter_2, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent_2, FVector CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}; // Size: 0x450
#pragma pack(pop)
