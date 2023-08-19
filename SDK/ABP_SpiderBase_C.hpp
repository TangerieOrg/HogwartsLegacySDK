#pragma once
#include <cstdint>
#include "ABP_Enemy_Character_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSkeletalMaterial.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UCapsuleComponent;
class UActorComponent;
class UObject;
class UAkComponent;
class ABiped_Player;
class AActor;
class UAnimationComponent;
struct FEnemy_ApparateActorData;
class USkeletalMesh;
class UNiagaraComponent;
class ABP_Spider_ApperateActor_C;
class AEnemy_ApparateActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UPhoenixGameSettings;
#pragma pack(push, 1)
class ABP_SpiderBase_C : public ABP_Enemy_Character_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x24f0
    UCapsuleComponent* HitMeToDealDamageCapsule; // 0x24f8
    UAkComponent* Ak_BP_SpiderBase; // 0x2500
    UAnimationComponent* Animation; // 0x2508
    FName AudioSwitchGroup; // 0x2510
    FName AudioSwitchState; // 0x2518
    char pad_2520[0x50];
    static ABP_SpiderBase_C* StaticClass();
    void SetupSkeletalMeshMaterials(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FSkeletalMaterial>& CallFunc_GetMaterials_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FSkeletalMaterial CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void ClearFX(bool KillNiagara, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UNiagaraComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_MaterialPermuterClearAllSwaps_bSuccess, UActorComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsBeingDestroyed_ReturnValue);
    AEnemy_ApparateActor* SpawnApparateActor0(FTransform SpawnTransform, FEnemy_ApparateActorData& Data, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Spider_ApperateActor_C* CallFunc_FinishSpawningActor_ReturnValue);
    bool StartFire(float Amount, FVector Location, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_StartFire_ReturnValue);
    void HitActor(FHitResult HitResult, AActor* ActorHit, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue);
    void UserConstructionScript(FName Tail, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetArachnophobiaModeEnabled_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1, bool K2Node_DynamicCast_bSuccess_1);
    void OnLoaded_6B05454E49DAC25C5338FF9AB2BBC2CB(UObject* Loaded);
    void OnLoaded_86042C2549929814C082D6A8C316CA01(UObject* Loaded);
    void HandleCriticalHealthChanged(bool bCritical);
    void BndEvt__BP_SpiderBase_BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature(AActor* pActor);
    void NewDeathFade0();
    void SetBlobbyMode(bool bInBlobbyModeEnabled);
    void ReceiveBeginPlay0();
    void ArachnophobiaModeChanged(UObject* Caller, int32_t int);
    void ExecuteUbergraph_BP_SpiderBase(int32_t EntryPoint, UObject* K2Node_CustomEvent_Loaded, UObject* Temp_object_Variable, USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x2570
#pragma pack(pop)
