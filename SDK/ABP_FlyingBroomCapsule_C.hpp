#pragma once
#include <cstdint>
#include "AFlyingBroom.hpp"
#include "ESlateVisibility.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_AccentVFX.hpp"
#include "FSTR_BroomStats.hpp"
#include "FVector.hpp"
class UCognitionStimuliSourceComponent;
class UObject;
class UAkComponent;
class UMountHeightLimitComponent;
class UChildActorComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class UFlyingBroomMovementComponent;
class UMountStreamingComponent;
class UNiagaraComponent;
class UFlyingBroomAudio;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
struct FMunitionImpactData;
#pragma pack(push, 1)
class ABP_FlyingBroomCapsule_C : public AFlyingBroom {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x980
    UAkComponent* AkComponent; // 0x988
    UChildActorComponent* BP_BroomFlightVFXActor; // 0x990
    USkeletalMeshComponent* SkeletalMesh; // 0x998
    UCapsuleComponent* Capsule1; // 0x9a0
    UCapsuleComponent* Capsule; // 0x9a8
    UMountHeightLimitComponent* MountHeightLimit; // 0x9b0
    UMountStreamingComponent* MountStreaming; // 0x9b8
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x9c0
    UFlyingBroomMovementComponent* FlyingBroomMovement; // 0x9c8
    UNiagaraComponent* ImpactEmitter; // 0x9d0
    FSTR_AccentVFX STR_AccentVFX; // 0x9d8
    UCapsuleComponent* Capsule_0; // 0xaa8
    bool FlyingUp; // 0xab0
    bool FlyingDown; // 0xab1
    char pad_ab2[0xe];
    static ABP_FlyingBroomCapsule_C* StaticClass();
    void OnNPCMountBroom0();
    void ApplyBroomStats0(bool StatsUnlocked, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_GetLockName_ReturnValue, FName CallFunc_GetLockName_ReturnValue_1, FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats, FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats_1, FName CallFunc_GetLockName_ReturnValue_2, FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats_2, TArray<FSTR_BroomStats>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue, FSTR_BroomStats CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue);
    void OnPlayerDismountBroom0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void OnPlayerMountBroom0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void OnBarrelRollStart0(bool bRollLeft, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void OnTurboStart0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void OnBoostStart0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void UpdateBroomAudio0(UFlyingBroomAudio* BroomAudio);
    void UpdatePitchAudio(UFlyingBroomAudio*& BroomAudio, float MaxAudioHeight, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void UpdateHeightAudio(UFlyingBroomAudio*& BroomAudio, float MaxAudioHeight, TArray<AActor*>& Temp_object_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_SelectFloat_ReturnValue);
    void UpdateSpeedAudio(UFlyingBroomAudio*& BroomAudio, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue);
    void UserConstructionScript();
    void DisableSpellHUD0(bool DisableSpellHUD, bool DisableHealtHUD);
    void MunitionImpact(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void ExecuteUbergraph_BP_FlyingBroomCapsule(int32_t EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_4, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_5, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, FVector CallFunc_GetActorForwardVector_ReturnValue);
}; // Size: 0xac0
#pragma pack(pop)
