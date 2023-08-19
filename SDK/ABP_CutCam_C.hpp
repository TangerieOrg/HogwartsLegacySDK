#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECameraStackLookAtStrength.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_CameraType\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class ACameraStackActor;
class USplineComponent;
class UCameraComponent;
class USceneComponent;
class UTimelineComponent;
class UPhoenixHUDWidget;
class ACharacter;
class UBillboardComponent;
class UCineCameraComponent;
class APlayerController;
class APlayerCameraManager;
class UUIManager;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_CutCam_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UCameraComponent* Camera1; // 0x250
    USceneComponent* CameraRoot; // 0x258
    USplineComponent* Spline; // 0x260
    USceneComponent* Scene; // 0x268
    float Timeline_2_NewTrack_0_181A717648D02FC47BC08CAD794F3738; // 0x270
    ETimelineDirection::Type Timeline_2__Direction_181A717648D02FC47BC08CAD794F3738; // 0x274
    char pad_275[0x3];
    UTimelineComponent* Timeline_2; // 0x278
    float Timeline_1_NewTrack_0_279F7CA2473E882EB9DE00B1E8ADB4E8; // 0x280
    ETimelineDirection::Type Timeline_1__Direction_279F7CA2473E882EB9DE00B1E8ADB4E8; // 0x284
    char pad_285[0x3];
    UTimelineComponent* Timeline_1; // 0x288
    E_CameraType::Type Type; // 0x290
    bool DoOnce; // 0x291
    char pad_292[0x2];
    float Duration; // 0x294
    float LookAtTime; // 0x298
    float BlendTime; // 0x29c
    float FadeTime; // 0x2a0
    float EndFadeDelay; // 0x2a4
    AActor* LookAtActor; // 0x2a8
    bool LockPlayer; // 0x2b0
    char pad_2b1[0x7];
    UCameraComponent* Camera; // 0x2b8
    FVector TargetStartLOC; // 0x2c0
    FVector CameraStartLOC; // 0x2cc
    float SplineROTOffset; // 0x2d8
    bool LockOrientation; // 0x2dc
    bool UseBlendProperties; // 0x2dd
    char pad_2de[0x2];
    float FOV; // 0x2e0
    float FOVEnd; // 0x2e4
    float SplineTest; // 0x2e8
    FVector TargetOffset; // 0x2ec
    FVector TargetOffsetEnd; // 0x2f8
    FVector CameraOffset; // 0x304
    FVector Offset; // 0x310
    char pad_31c[0x4];
    TArray<AActor*> Target; // 0x320
    bool ConstantVelocity; // 0x330
    bool SuspendEnemies; // 0x331
    char pad_332[0x2];
    FVector CameraOffsetEnd; // 0x334
    ACameraStackActor* CamStackActor; // 0x340
    char pad_348[0x20];
    bool UseAltReturn; // 0x368
    char pad_369[0x3];
    float BlendTimeReturn; // 0x36c
    float FadeTimeReturn; // 0x370
    bool AimAtTargetOnComplete; // 0x374
    char pad_375[0x3];
    int32_t NoOfSwitches; // 0x378
    int32_t Count; // 0x37c
    UPhoenixHUDWidget* HUDWidgetRef; // 0x380
    bool HideHUD; // 0x388
    char pad_389[0x3];
    float LookAtTimeReturn; // 0x38c
    ETargetSpeedMode::Type SpeedMode; // 0x390
    bool UseCineCam; // 0x391
    char pad_392[0x6];
    UCameraComponent* CAM; // 0x398
    ECameraStackLookAtStrength Look_at_Strength; // 0x3a0
    bool SetInt32; // 0x3a1
    char pad_3a2[0x6];
    AActor* ViewTarget; // 0x3a8
    static ABP_CutCam_C* StaticClass();
    void Aim_On_Complete(bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue);
    void SetSplineCam_Test(float Time, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetRightVectorAtTime_ReturnValue, FVector CallFunc_GetLocationAtTime_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
    void SetBlend(float Alpha, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_VLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue);
    void SetTarget(FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
    void SetSplineCam(float Time, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetRightVectorAtTime_ReturnValue, FVector CallFunc_GetLocationAtTime_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FRotator CallFunc_RLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
    void UserConstructionScript0(FTransform Temp_struct_Variable, FTransform CallFunc_MakeTransform_ReturnValue, UBillboardComponent* CallFunc_AddComponent_ReturnValue, UCineCameraComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32_t CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void SwitchOn(AActor* SwitchActor);
    void ReceiveTick0(float DeltaSeconds);
    void Reset();
    void ReceiveBeginPlay0();
    void SwitchOff(AActor* SwitchActor);
    void MoveDissalow();
    void MoveDissalow2();
    void ExecuteUbergraph_BP_CutCam(int32_t EntryPoint, int32_t Temp_int_Variable, bool Temp_bool_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32_t Temp_int_Variable_1, bool Temp_bool_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_1, float Temp_float_Variable_1, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, int32_t Temp_int_Variable_2, bool Temp_bool_Variable_6, int32_t CallFunc_Add_IntInt_ReturnValue_2, float Temp_float_Variable_2, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_Variable_10, bool CallFunc_Not_PreBool_ReturnValue_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_8, bool Temp_bool_Variable_11, bool CallFunc_Not_PreBool_ReturnValue_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_10, bool Temp_bool_Variable_12, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_5, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32_t Temp_int_Variable_3, int32_t Temp_int_Variable_4, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, float Temp_float_Variable_3, bool Temp_bool_Variable_15, bool Temp_bool_IsClosed_Variable, float K2Node_Select_Default_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_16, APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_Select_Default_3, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, int32_t CallFunc_Array_Length_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_2, AActor* CallFunc_GetViewTarget_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_5, UUIManager* CallFunc_Get_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool Temp_bool_Variable_17, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, float K2Node_Select_Default_6, bool CallFunc_Greater_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, bool CallFunc_IsValid_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_11, APlayerController* CallFunc_GetPlayerController_ReturnValue_3, APlayerController* CallFunc_GetPlayerController_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_6, AActor* CallFunc_Array_Get_Item);
    void CamStart__DelegateSignature();
    void CamFinished__DelegateSignature();
}; // Size: 0x3b0
#pragma pack(pop)
