#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UPostProcessComponent;
class UObject;
class USceneComponent;
struct FHitResult;
class UTimelineComponent;
class UVFX_BP_Detected_HUD_FlashColor_C;
class UObjectStateInfo;
#pragma pack(push, 1)
class AVFX_BP_ScreenFX_LowHealth_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UPostProcessComponent* Saturation_PostProcess; // 0x250
    UPostProcessComponent* Chromatic_PostProcess; // 0x258
    UPostProcessComponent* RedCreep_PostProcess; // 0x260
    UPostProcessComponent* Distortion_PostProcess; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    float FadeIn_FadeIn_1384DEA44E954807017759AF0C091E0E; // 0x278
    ETimelineDirection::Type FadeIn__Direction_1384DEA44E954807017759AF0C091E0E; // 0x27c
    char pad_27d[0x3];
    UTimelineComponent* FadeIn; // 0x280
    float Timeline_0_Creep_7511BDBF440AFDE0C8B7D9A3235227BA; // 0x288
    ETimelineDirection::Type Timeline_0__Direction_7511BDBF440AFDE0C8B7D9A3235227BA; // 0x28c
    char pad_28d[0x3];
    UTimelineComponent* Timeline_0; // 0x290
    float Timeline_FadeOut_OverallOpacity_E25413C6490F071CB63A2EA794AFAA75; // 0x298
    float Timeline_FadeOut_Creep_E25413C6490F071CB63A2EA794AFAA75; // 0x29c
    ETimelineDirection::Type Timeline_FadeOut__Direction_E25413C6490F071CB63A2EA794AFAA75; // 0x2a0
    char pad_2a1[0x7];
    UTimelineComponent* Timeline_FadeOut; // 0x2a8
    float Timeline_Pulse_OverallOpacity_E33E5EEF457E3762F1A991ACC9272183; // 0x2b0
    float Timeline_Pulse_Intensity_E33E5EEF457E3762F1A991ACC9272183; // 0x2b4
    float Timeline_Pulse_Distortion_Power_E33E5EEF457E3762F1A991ACC9272183; // 0x2b8
    float Timeline_Pulse_Creep_E33E5EEF457E3762F1A991ACC9272183; // 0x2bc
    ETimelineDirection::Type Timeline_Pulse__Direction_E33E5EEF457E3762F1A991ACC9272183; // 0x2c0
    char pad_2c1[0x7];
    UTimelineComponent* Timeline_Pulse; // 0x2c8
    float Timeline_Health_CreepWiggle_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2d0
    float Timeline_Health_Time_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2d4
    float Timeline_Health_OverallOpacity_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2d8
    float Timeline_Health_Intensity_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2dc
    float Timeline_Health_Distortion_Power_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2e0
    float Timeline_Health_Creep_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2e4
    ETimelineDirection::Type Timeline_Health__Direction_63ABCC6845319FE5A49B2CA55A5B78DC; // 0x2e8
    char pad_2e9[0x7];
    UTimelineComponent* Timeline_Health; // 0x2f0
    UVFX_BP_Detected_HUD_FlashColor_C* Flash; // 0x2f8
    char pad_300[0x10];
    float Intensity; // 0x310
    float Blend_Weight; // 0x314
    float Distortion_Power; // 0x318
    float Creep; // 0x31c
    float OverallOpacity; // 0x320
    float Chromatic_Intensity; // 0x324
    float Saruration_Intensity; // 0x328
    char pad_32c[0x4];
    UObjectStateInfo* ObjectStateInfo; // 0x330
    float DesiredPercent; // 0x338
    ETimelineDirection::Type Direction; // 0x33c
    char pad_33d[0x3];
    float TimelineLength; // 0x340
    bool FirstTime; // 0x344
    char pad_345[0x3];
    float Pulse_Intensity; // 0x348
    float Pulse_Distortion_Power; // 0x34c
    float Pulse_Creep; // 0x350
    float Pulse_OverallOpacity; // 0x354
    float Damage_Creep; // 0x358
    float Creep_Wiggle; // 0x35c
    float Fade_CreepPercent; // 0x360
    float Fade_OverallOpacityPercent; // 0x364
    static AVFX_BP_ScreenFX_LowHealth_C* StaticClass();
    void Apply_Effect(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
    void ReachedTarget(ETimelineDirection::Type NewParam, float CurrentPercent, bool& TargetReached, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void Calculate_Desired_Percent(float& Percent, float CallFunc_GetHealthPercentage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
    void Timeline_Pulse__FinishedFunc();
    void Timeline_Pulse__UpdateFunc();
    void Timeline_Health__FinishedFunc();
    void Timeline_Health__UpdateFunc();
    void Timeline_FadeOut__FinishedFunc();
    void Timeline_FadeOut__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void FadeIn__FinishedFunc();
    void FadeIn__UpdateFunc();
    void OnActorDamaged(AActor* Target, AActor* Instigator, float Damage, FHitResult& Hit);
    void OnHealthChanged(AActor* Target, float InHealthChange, bool bIndicateHUD);
    void CriticalHealthPulse(UObject* Caller);
    void ReceiveDestroyed0();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void Damaged();
    void UpdateFadeOut();
    void ExecuteUbergraph_VFX_BP_ScreenFX_LowHealth(int32_t EntryPoint);
    void Flash_UI__DelegateSignature();
}; // Size: 0x368
#pragma pack(pop)
