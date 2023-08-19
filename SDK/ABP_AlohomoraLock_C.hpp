#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EDifficulty.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EInputDeviceUsed.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UBlendableGlobalLightingComponent;
class UBoxComponent;
class URenderSettingsCustomBlendDomainOverrideNamedComponent;
class UFoliageRemoverActorComponent;
class UPostProcessComponent;
class UStaticMeshComponent;
class USpotLightComponent;
class UUIManager;
class UCineCameraComponent;
class APlayerController;
class USkeletalMeshComponent;
class USceneComponent;
class UAkComponent;
class ABiped_Player;
class UTimelineComponent;
class UABP_AlohomoraLock_C;
class UNiagaraComponent;
class UPointLightComponent;
class UUI_BP_SimpleLegend_Screen_C;
class UObject;
struct FHitBySpellData;
#pragma pack(push, 1)
class ABP_AlohomoraLock_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    URenderSettingsCustomBlendDomainOverrideNamedComponent* TurnOffHighContrastGameplay; // 0x250
    UFoliageRemoverActorComponent* FoliageRemoverActor; // 0x258
    UBoxComponent* Box; // 0x260
    UStaticMeshComponent* Cube; // 0x268
    USpotLightComponent* SpotLight1; // 0x270
    UPostProcessComponent* PostProcess; // 0x278
    USpotLightComponent* SpotLight; // 0x280
    UBlendableGlobalLightingComponent* BlendableGlobalLighting; // 0x288
    UCineCameraComponent* Camera; // 0x290
    USkeletalMeshComponent* SkeletalMesh; // 0x298
    USceneComponent* SceneRoot; // 0x2a0
    UAkComponent* Ak_BP_Alohomora; // 0x2a8
    float CameraTimeline_CameraFocalLength_BBD92ECF4B9CBEF233E45D835A118368; // 0x2b0
    ETimelineDirection::Type CameraTimeline__Direction_BBD92ECF4B9CBEF233E45D835A118368; // 0x2b4
    char pad_2b5[0x3];
    UTimelineComponent* CameraTimeline; // 0x2b8
    bool InteractInitiated; // 0x2c0
    bool PuzzleComplete; // 0x2c1
    char pad_2c2[0x6];
    UABP_AlohomoraLock_C* AnimBlueprint; // 0x2c8
    float InnerTargetDegrees; // 0x2d0
    float OuterTargetDegrees; // 0x2d4
    float CurrentOuterDegrees; // 0x2d8
    float CurrentInnerDegrees; // 0x2dc
    float WinningInnerAngle; // 0x2e0
    float WinningOuterAngle; // 0x2e4
    float DistanceToInnerWin; // 0x2e8
    float DistanceToOuterWin; // 0x2ec
    float MinStickPressToWin; // 0x2f0
    bool ContainsLoot; // 0x2f4
    char pad_2f5[0x3];
    float MaxErrorToWin; // 0x2f8
    float MaxRumble; // 0x2fc
    bool RightStickPressed; // 0x300
    bool LeftStickPressed; // 0x301
    char pad_302[0x2];
    float LeftStickFrac; // 0x304
    float RightStickFrac; // 0x308
    float MinAngleForFX; // 0x30c
    float LeftRumbleMultiplier; // 0x310
    float LargeRumble; // 0x314
    float MedRumble; // 0x318
    float SmallRumble; // 0x31c
    float RightRumbleMult; // 0x320
    float LastUnsolvedTime; // 0x324
    float HoldtimeForWin; // 0x328
    float OneStickCorrectRumble; // 0x32c
    float BothSticksCorrectRumble; // 0x330
    float DistanceForParticles; // 0x334
    float Prev_Inner_Degrees; // 0x338
    float Prev_Outer_Degrees; // 0x33c
    float InnerSpeed; // 0x340
    float OuterSpeed; // 0x344
    float Delta_Seconds; // 0x348
    bool InnerDiscMoving; // 0x34c
    bool OuterDiscMoving; // 0x34d
    char pad_34e[0x2];
    float StartSpeed; // 0x350
    float StopSpeed; // 0x354
    AActor* LockedActor; // 0x358
    UNiagaraComponent* GreenSpark; // 0x360
    UNiagaraComponent* RedSpark; // 0x368
    float GreenAlpha; // 0x370
    float RedAlpha; // 0x374
    float FX_Intensity; // 0x378
    FName GreenOuterSocket; // 0x37c
    FName RedInnerSocket; // 0x384
    bool RightStickPressedLastFrame; // 0x38c
    bool LeftStickPressedLastFrame; // 0x38d
    char pad_38e[0x2];
    float BaseOuterDegrees; // 0x390
    float BaseInnerDegrees; // 0x394
    float InitialLeftStickAngle; // 0x398
    float InitialRightStickAngle; // 0x39c
    FVector GreenJitter; // 0x3a0
    FVector RedJitter; // 0x3ac
    float JitterMax; // 0x3b8
    float JitterMin; // 0x3bc
    UPointLightComponent* RedLight; // 0x3c0
    UPointLightComponent* GreenLight; // 0x3c8
    UNiagaraComponent* RedSmoke; // 0x3d0
    UNiagaraComponent* GreenSmoke; // 0x3d8
    FHermesBPDelegateHandle MunitionImpactHandle; // 0x3e0
    UUI_BP_SimpleLegend_Screen_C* LegendWidget; // 0x3f0
    bool UsingKeyboard; // 0x3f8
    bool KeyboardButtonPressed; // 0x3f9
    char pad_3fa[0x2];
    float Outer_KB_Input; // 0x3fc
    float Inner_KB_Input; // 0x400
    float Keyboard_Max_Speed; // 0x404
    bool Outer_KB_Pressed; // 0x408
    bool Inner_KB_Pressed; // 0x409
    char pad_40a[0x2];
    float Outer_KB_Current_Speed; // 0x40c
    float KB_Interp_Speed; // 0x410
    float Inner_KB_Current_Speed; // 0x414
    UNiagaraComponent* GreenCorrectFX; // 0x418
    UNiagaraComponent* RedCorrectFX; // 0x420
    bool ExitingPuzzle; // 0x428
    char pad_429[0x7];
    TArray<AActor*> Overlapping_Actors; // 0x430
    FLinearColor GreenColor; // 0x440
    FLinearColor RedColor; // 0x450
    float KBOuterFirstTickInput; // 0x460
    float KBInnerFirstTickInput; // 0x464
    FHermesBPDelegateHandle InputDeviceChangedHandle; // 0x468
    float FadeBlackDuration; // 0x478
    char pad_47c[0x4];
    static ABP_AlohomoraLock_C* StaticClass();
    void HighContrastMode(bool Disable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
    void UpdateLegend(EInputDeviceUsed Temp_byte_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, EInputDeviceUsed Temp_byte_Variable_1, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, EDifficulty CallFunc_GetCurrentGameDifficulty_Difficulty, bool CallFunc_GetCurrentGameDifficulty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString K2Node_Select_Default, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FString K2Node_Select_Default_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1);
    void PlayLightWhooshMotion(float StickAngle, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue);
    void ActivateUI(bool Activate, bool CallFunc_Not_PreBool_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_SimpleLegend_Screen_C* CallFunc_Create_ReturnValue, UUIManager* CallFunc_Get_ReturnValue);
    void CalculateJitter(float JitterSpeed, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, FVector CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue_1, FVector CallFunc_GetActorUpVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_VLerp_ReturnValue_1);
    void ClickSFX(int32_t PrevInnerClicksInt, int32_t InnerClicksInt, int32_t PrevOuterClicksInt, int32_t OuterClicksInt, float DegreesBetweenClicks, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    float OuterFXAngle(float CallFunc_LeftStickAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    float InnerFXAngle(float CallFunc_RightStickAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void OnRightStickPressed(float InnerSocketDegrees);
    bool CalcLeftStickPressed(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    bool CalcRightStickPressed(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    float LeftStickAngle(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_DegAtan2_ReturnValue);
    float RightStickAngle(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan2_ReturnValue);
    void OnLeftStickPressed(float OuterSocketDegrees);
    void PickClosest45(float A, float& Out, float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_6, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue);
    float SetAngleToRange(float InputPin, float Angle, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void CalculateAnglesFromSticks(float DeltaTime, float& NewParam, float InnerInterpSpeed, float OuterInterpSpeed, float DeltaSec, float CallFunc_RightStickAngle_ReturnValue, float CallFunc_LeftStickAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_LeftStickAngle_ReturnValue_1, float CallFunc_RightStickAngle_ReturnValue_1, float CallFunc_PickClosest45_Out, float CallFunc_PickClosest45_Out_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FRotator CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_SetAngleToRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, FRotator CallFunc_RInterpTo_ReturnValue_1, float CallFunc_SetAngleToRange_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_SetAngleToRange_ReturnValue_2, float CallFunc_Abs_ReturnValue_1);
    void CameraTimeline__FinishedFunc();
    void CameraTimeline__UpdateFunc();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void InteractionInitiated(UObject* Caller);
    void CabinetOpen(UObject* Caller);
    void RightButtonPressed(UObject* Caller);
    void ActorHitBySpell(UObject* Caller, FHitBySpellData& HitBySpell);
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void Exit();
    void Alohomora_OuterRing_Pressed(UObject* Caller, float float);
    void Alohomora_InnerRing_Pressed(UObject* Caller, float float);
    void Alohomora_OuterRing_Released(UObject* Caller, float float);
    void Alohomora_InnerRing_Released(UObject* Caller, float float);
    void ExitImmediately(UObject* Caller);
    void AutoSolve();
    void RefreshButtonCallouts(UObject* Caller);
    void ExecuteUbergraph_BP_AlohomoraLock(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x480
#pragma pack(pop)
