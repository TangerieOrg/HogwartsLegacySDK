#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UObjectStateComponent;
class UStaticMesh;
class ABP_Clocktower_C;
class USceneComponent;
class UStaticMeshComponent;
struct FTimeEvent;
class UArrestoMomentumComponent;
class UTimelineComponent;
#pragma pack(push, 1)
class ABP_Clock_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UObjectStateComponent* ObjectState; // 0x250
    USceneComponent* ViewCheck; // 0x258
    UStaticMeshComponent* SM_MinuteHand; // 0x260
    UStaticMeshComponent* SM_HourHand; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    float MinuteTimeline_Alpha_5DA8696E4D6F9CE552A49A8E250327E8; // 0x278
    ETimelineDirection::Type MinuteTimeline__Direction_5DA8696E4D6F9CE552A49A8E250327E8; // 0x27c
    char pad_27d[0x3];
    UTimelineComponent* MinuteTimeline; // 0x280
    float HourTImeline_Alpha_AEBE18A54C9AB1D5F60EBBA7410137C3; // 0x288
    ETimelineDirection::Type HourTImeline__Direction_AEBE18A54C9AB1D5F60EBBA7410137C3; // 0x28c
    char pad_28d[0x3];
    UTimelineComponent* HourTImeline; // 0x290
    TArray<int32_t> handlesForTimeEvent; // 0x298
    FRotator desiredMinuteRot; // 0x2a8
    FRotator currentMinuteRot; // 0x2b4
    FRotator desiredHourRot; // 0x2c0
    FRotator currentHourRot; // 0x2cc
    UStaticMesh* HourHand; // 0x2d8
    UStaticMesh* MinuteHand; // 0x2e0
    bool xNegative; // 0x2e8
    char pad_2e9[0x3];
    int32_t Hour; // 0x2ec
    int32_t Minute; // 0x2f0
    char pad_2f4[0x4];
    ABP_Clocktower_C* Gears; // 0x2f8
    FVector viewCheckWorldPosition; // 0x300
    bool bFrozen; // 0x30c
    bool bGearsFrozen; // 0x30d
    bool bArresto; // 0x30e
    bool bGearsArresto; // 0x30f
    static ABP_Clock_C* StaticClass();
    bool StartFreeze(AActor* Instigator, float Amount, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetFrozen_ReturnValue);
    bool DisallowArrestoMomentum(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void SetInitialRotation(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, int32_t CallFunc_GetSimulatedMinuteBP_ReturnValue, int32_t CallFunc_GetSimulatedHourBP_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32_t CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_4, int32_t CallFunc_Multiply_IntInt_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_2, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_3);
    void UserConstructionScript0(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Conv_IntToFloat_ReturnValue_2, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
    void HourTImeline__FinishedFunc();
    void HourTImeline__UpdateFunc();
    void MinuteTimeline__FinishedFunc();
    void MinuteTimeline__UpdateFunc();
    void OnAttemptToFreeze();
    void OnFailedToFreeze();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void UpdateHour(FTimeEvent& InTimeEvent);
    void UpdateMinute(FTimeEvent& InTimeEvent);
    void OnThaw(AActor* Instigator);
    void BndEvt__Gears_K2Node_ComponentBoundEvent_0_Frozen__DelegateSignature(bool bFreeze, AActor* Instigator);
    void OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation);
    void OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent);
    void BndEvt__Gears_K2Node_ComponentBoundEvent_1_Arresto__DelegateSignature(float Duration);
    void BndEvt__Gears_K2Node_ComponentBoundEvent_2_ArrestoEnd__DelegateSignature();
    void ExecuteUbergraph_BP_Clock(int32_t EntryPoint);
}; // Size: 0x310
#pragma pack(pop)
