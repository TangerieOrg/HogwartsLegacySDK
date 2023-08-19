#include "AActor.hpp"
#include "ABP_Enemy_Character_C.hpp"
#include "ABP_SpiderBase_C.hpp"
#include "ABP_Spider_ApperateActor_C.hpp"
#include "ABiped_Player.hpp"
#include "AEnemy_ApparateActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FEnemy_ApparateActorData.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSkeletalMaterial.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UAkComponent.hpp"
#include "UAnimationComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMesh.hpp"
void ABP_SpiderBase_C::ClearFX(bool KillNiagara, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UNiagaraComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_MaterialPermuterClearAllSwaps_bSuccess, UActorComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsBeingDestroyed_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.ClearFX"));
    struct Params_ClearFX {
        bool KillNiagara; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        TArray<UNiagaraComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x10
        bool CallFunc_MaterialPermuterClearAllSwaps_bSuccess; // 0x20
        char pad_21[0x7];
        UActorComponent* CallFunc_Array_Get_Item; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        char pad_34[0x4];
        UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        bool CallFunc_Less_IntInt_ReturnValue; // 0x41
        bool CallFunc_IsBeingDestroyed_ReturnValue; // 0x42
    }; // Size: 0x43
    Params_ClearFX params{};
    params.KillNiagara = (bool)KillNiagara;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UNiagaraComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_MaterialPermuterClearAllSwaps_bSuccess = (bool)CallFunc_MaterialPermuterClearAllSwaps_bSuccess;
    params.CallFunc_Array_Get_Item = (UActorComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_DynamicCast_AsNiagara_Particle_System = (UNiagaraComponent*)K2Node_DynamicCast_AsNiagara_Particle_System;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsBeingDestroyed_ReturnValue = (bool)CallFunc_IsBeingDestroyed_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
ABP_SpiderBase_C* ABP_SpiderBase_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C");
    return (ABP_SpiderBase_C*)res;
}
void ABP_SpiderBase_C::OnLoaded_6B05454E49DAC25C5338FF9AB2BBC2CB(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.OnLoaded_6B05454E49DAC25C5338FF9AB2BBC2CB"));
    struct Params_OnLoaded_6B05454E49DAC25C5338FF9AB2BBC2CB {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_6B05454E49DAC25C5338FF9AB2BBC2CB params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::SetupSkeletalMeshMaterials(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FSkeletalMaterial>& CallFunc_GetMaterials_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FSkeletalMaterial CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.SetupSkeletalMeshMaterials"));
    struct Params_SetupSkeletalMeshMaterials {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        TArray<FSkeletalMaterial> CallFunc_GetMaterials_ReturnValue; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        char pad_24[0x4];
        FSkeletalMaterial CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x50
    }; // Size: 0x51
    Params_SetupSkeletalMeshMaterials params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetMaterials_ReturnValue = (TArray<FSkeletalMaterial>)CallFunc_GetMaterials_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FSkeletalMaterial)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetMaterials_ReturnValue = params.CallFunc_GetMaterials_ReturnValue;
}
AEnemy_ApparateActor* ABP_SpiderBase_C::SpawnApparateActor0(FTransform SpawnTransform, FEnemy_ApparateActorData& Data, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_Spider_ApperateActor_C* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.SpawnApparateActor"));
    struct Params_SpawnApparateActor {
        FTransform SpawnTransform; // 0x0
        FEnemy_ApparateActorData Data; // 0x30
        AEnemy_ApparateActor* ReturnValue; // 0x70
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x78
        ABP_Spider_ApperateActor_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x80
    }; // Size: 0x88
    Params_SpawnApparateActor params{};
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.Data = (FEnemy_ApparateActorData)Data;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_Spider_ApperateActor_C*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
    Data = params.Data;
    return (AEnemy_ApparateActor*)params.ReturnValue;
}
bool ABP_SpiderBase_C::StartFire(float Amount, FVector Location, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_StartFire_ReturnValue) {}
void ABP_SpiderBase_C::HitActor(FHitResult HitResult, AActor* ActorHit, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue) {}
void ABP_SpiderBase_C::UserConstructionScript(FName Tail, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetArachnophobiaModeEnabled_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FName Tail; // 0x0
        UObject* CallFunc_LoadAsset_Blocking_ReturnValue; // 0x8
        USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        bool CallFunc_GetArachnophobiaModeEnabled_ReturnValue; // 0x29
        char pad_2a[0x6];
        UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1; // 0x30
        USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1; // 0x38
        bool K2Node_DynamicCast_bSuccess_1; // 0x40
    }; // Size: 0x41
    Params_UserConstructionScript params{};
    params.Tail = (FName)Tail;
    params.CallFunc_LoadAsset_Blocking_ReturnValue = (UObject*)CallFunc_LoadAsset_Blocking_ReturnValue;
    params.K2Node_DynamicCast_AsSkeletal_Mesh = (USkeletalMesh*)K2Node_DynamicCast_AsSkeletal_Mesh;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetArachnophobiaModeEnabled_ReturnValue = (bool)CallFunc_GetArachnophobiaModeEnabled_ReturnValue;
    params.CallFunc_LoadAsset_Blocking_ReturnValue_1 = (UObject*)CallFunc_LoadAsset_Blocking_ReturnValue_1;
    params.K2Node_DynamicCast_AsSkeletal_Mesh_1 = (USkeletalMesh*)K2Node_DynamicCast_AsSkeletal_Mesh_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::OnLoaded_86042C2549929814C082D6A8C316CA01(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.OnLoaded_86042C2549929814C082D6A8C316CA01"));
    struct Params_OnLoaded_86042C2549929814C082D6A8C316CA01 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_86042C2549929814C082D6A8C316CA01 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::HandleCriticalHealthChanged(bool bCritical) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.HandleCriticalHealthChanged"));
    struct Params_HandleCriticalHealthChanged {
        bool bCritical; // 0x0
    }; // Size: 0x1
    Params_HandleCriticalHealthChanged params{};
    params.bCritical = (bool)bCritical;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::BndEvt__BP_SpiderBase_BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.BndEvt__BP_SpiderBase_BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature"));
    struct Params_BndEvt__BP_SpiderBase_BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_BndEvt__BP_SpiderBase_BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::NewDeathFade0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.NewDeathFade"));
    struct Params_NewDeathFade {
    }; // Size: 0x0
    Params_NewDeathFade params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::SetBlobbyMode(bool bInBlobbyModeEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.SetBlobbyMode"));
    struct Params_SetBlobbyMode {
        bool bInBlobbyModeEnabled; // 0x0
    }; // Size: 0x1
    Params_SetBlobbyMode params{};
    params.bInBlobbyModeEnabled = (bool)bInBlobbyModeEnabled;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::ArachnophobiaModeChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/BP_SpiderBase.BP_SpiderBase_C.ArachnophobiaModeChanged"));
    struct Params_ArachnophobiaModeChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_ArachnophobiaModeChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void ABP_SpiderBase_C::ExecuteUbergraph_BP_SpiderBase(int32_t EntryPoint, UObject* K2Node_CustomEvent_Loaded, UObject* Temp_object_Variable, USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess) {}
