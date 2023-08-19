#pragma once
#include <cstdint>
#include "AFlyingBroom.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Apperate_Colors.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USkeletalMeshComponent;
class USceneComponent;
class UTimelineComponent;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_FlyingBroomProp_C : public AFlyingBroom {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x980
    USkeletalMeshComponent* SkeletalMesh; // 0x988
    USceneComponent* DefaultSceneRoot; // 0x990
    float DismountTimeline_Scale_54A5A1134813F2F93F1823926DBFE5F9; // 0x998
    float DismountTimeline_ToHandAlpha_54A5A1134813F2F93F1823926DBFE5F9; // 0x99c
    ETimelineDirection::Type DismountTimeline__Direction_54A5A1134813F2F93F1823926DBFE5F9; // 0x9a0
    char pad_9a1[0x7];
    UTimelineComponent* DismountTimeline; // 0x9a8
    ABiped_Player* Player; // 0x9b0
    FSTR_Apperate_Colors Apperate_Color; // 0x9b8
    char pad_9e8[0x8];
    static ABP_FlyingBroomProp_C* StaticClass();
    void SetScale(float InScale, float CallFunc_FClamp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
    void UserConstructionScript();
    void DismountTimeline__FinishedFunc();
    void DismountTimeline__UpdateFunc();
    void DismountTimeline__StartFadeOut__EventFunc();
    void DismountBroom0(ABiped_Player* Player, bool Instant);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FlyingBroomProp(int32_t EntryPoint, FVector CallFunc_VLerp_ReturnValue, FObjectFadeParamsSpeedDuration K2Node_MakeStruct_ObjectFadeParamsSpeedDuration, ABiped_Player* K2Node_Event_Player, bool K2Node_Event_Instant, FTransform CallFunc_GetTransform_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_TLerp_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_ActorStartFade_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
}; // Size: 0x9f0
#pragma pack(pop)
