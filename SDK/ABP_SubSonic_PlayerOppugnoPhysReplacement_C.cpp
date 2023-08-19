#include "AActor.hpp"
#include "ABP_SubSonic_PlayerOppugnoPhysReplacement_C.hpp"
#include "AEnemyAIWeapon.hpp"
#include "AExplosiveBarrel.hpp"
#include "AMunitionType_PhoenixSubsonic.hpp"
#include "AOppugnoSpellTool.hpp"
#include "APawn.hpp"
#include "ASpellTool.hpp"
#include "FDamageInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UObjectStateComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UVelocityTrackerComponent.hpp"
ABP_SubSonic_PlayerOppugnoPhysReplacement_C* ABP_SubSonic_PlayerOppugnoPhysReplacement_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C");
    return (ABP_SubSonic_PlayerOppugnoPhysReplacement_C*)res;
}
void ABP_SubSonic_PlayerOppugnoPhysReplacement_C::OnFire(AActor* Target, FVector TargetLocation, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.OnFire"));
    struct Params_OnFire {
        AActor* Target; // 0x0
        FVector TargetLocation; // 0x8
        FVector Velocity; // 0x14
    }; // Size: 0x20
    Params_OnFire params{};
    params.Target = (AActor*)Target;
    params.TargetLocation = (FVector)TargetLocation;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
}
void ABP_SubSonic_PlayerOppugnoPhysReplacement_C::OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.OnHit"));
    struct Params_OnHit {
        FHitResult HitResult; // 0x0
        bool bDestroyed; // 0x88
        bool bHit; // 0x89
        bool bBlocked; // 0x8a
        bool bFailed; // 0x8b
    }; // Size: 0x8c
    Params_OnHit params{};
    params.HitResult = (FHitResult)HitResult;
    params.bDestroyed = (bool)bDestroyed;
    params.bHit = (bool)bHit;
    params.bBlocked = (bool)bBlocked;
    params.bFailed = (bool)bFailed;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void ABP_SubSonic_PlayerOppugnoPhysReplacement_C::ExecuteUbergraph_BP_SubSonic_PlayerOppugnoPhysReplacement(int32_t EntryPoint, ASpellTool* CallFunc_GetSpellTool_ReturnValue, AOppugnoSpellTool* K2Node_DynamicCast_AsOppugno_Spell_Tool, bool K2Node_DynamicCast_bSuccess, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity, FVector CallFunc_Multiply_VectorFloat_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UClass* K2Node_ClassDynamicCast_AsMunition_Type_Subsonic_Spell, bool K2Node_ClassDynamicCast_bSuccess, AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, FDamageInfo CallFunc_DoDamageTarget_OutDamageInfo, bool CallFunc_DoDamageTarget_ReturnValue, AExplosiveBarrel* K2Node_DynamicCast_AsExplosive_Barrel, bool K2Node_DynamicCast_bSuccess_1, UVelocityTrackerComponent* CallFunc_AddVelocityTracker_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, AEnemyAIWeapon* K2Node_DynamicCast_AsEnemy_AIWeapon, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.ExecuteUbergraph_BP_SubSonic_PlayerOppugnoPhysReplacement"));
    struct Params_ExecuteUbergraph_BP_SubSonic_PlayerOppugnoPhysReplacement {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        ASpellTool* CallFunc_GetSpellTool_ReturnValue; // 0x8
        AOppugnoSpellTool* K2Node_DynamicCast_AsOppugno_Spell_Tool; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        FHitResult K2Node_Event_HitResult; // 0x1c
        bool K2Node_Event_bDestroyed; // 0xa4
        bool K2Node_Event_bHit; // 0xa5
        bool K2Node_Event_bBlocked; // 0xa6
        bool K2Node_Event_bFailed; // 0xa7
        bool CallFunc_BreakHitResult_bBlockingHit; // 0xa8
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0xa9
        char pad_aa[0x2];
        float CallFunc_BreakHitResult_Time; // 0xac
        float CallFunc_BreakHitResult_Distance; // 0xb0
        FVector CallFunc_BreakHitResult_Location; // 0xb4
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0xc0
        FVector CallFunc_BreakHitResult_Normal; // 0xcc
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0xd8
        char pad_e4[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0xe8
        AActor* CallFunc_BreakHitResult_HitActor; // 0xf0
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0xf8
        FName CallFunc_BreakHitResult_HitBoneName; // 0x100
        int32_t CallFunc_BreakHitResult_HitItem; // 0x108
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x10c
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x110
        FVector CallFunc_BreakHitResult_TraceStart; // 0x114
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x120
        char pad_12c[0x4];
        AActor* K2Node_Event_Target; // 0x130
        FVector K2Node_Event_TargetLocation; // 0x138
        FVector K2Node_Event_Velocity; // 0x144
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x150
        char pad_15c[0x4];
        APawn* CallFunc_GetInstigator_ReturnValue; // 0x160
        char pad_168[0x8];
        FTransform CallFunc_K2_GetComponentToWorld_ReturnValue; // 0x170
        AActor* CallFunc_GetOwner_ReturnValue; // 0x1a0
        AActor* CallFunc_GetOwner_ReturnValue_1; // 0x1a8
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x1b0
        UClass* K2Node_ClassDynamicCast_AsMunition_Type_Subsonic_Spell; // 0x1b8
        bool K2Node_ClassDynamicCast_bSuccess; // 0x1c0
        char pad_1c1[0x7];
        AActor* CallFunc_FinishSpawningActor_ReturnValue; // 0x1c8
        bool CallFunc_IsValidClass_ReturnValue; // 0x1d0
        char pad_1d1[0x7];
        FDamageInfo CallFunc_DoDamageTarget_OutDamageInfo; // 0x1d8
        bool CallFunc_DoDamageTarget_ReturnValue; // 0x3a0
        char pad_3a1[0x7];
        AExplosiveBarrel* K2Node_DynamicCast_AsExplosive_Barrel; // 0x3a8
        bool K2Node_DynamicCast_bSuccess_1; // 0x3b0
        char pad_3b1[0x7];
        UVelocityTrackerComponent* CallFunc_AddVelocityTracker_ReturnValue; // 0x3b8
        int32_t CallFunc_Array_Add_ReturnValue; // 0x3c0
        char pad_3c4[0x4];
        AEnemyAIWeapon* K2Node_DynamicCast_AsEnemy_AIWeapon; // 0x3c8
        bool K2Node_DynamicCast_bSuccess_2; // 0x3d0
        bool CallFunc_IsValid_ReturnValue; // 0x3d1
    }; // Size: 0x3d2
    Params_ExecuteUbergraph_BP_SubSonic_PlayerOppugnoPhysReplacement params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetSpellTool_ReturnValue = (ASpellTool*)CallFunc_GetSpellTool_ReturnValue;
    params.K2Node_DynamicCast_AsOppugno_Spell_Tool = (AOppugnoSpellTool*)K2Node_DynamicCast_AsOppugno_Spell_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_HitResult = (FHitResult)K2Node_Event_HitResult;
    params.K2Node_Event_bDestroyed = (bool)K2Node_Event_bDestroyed;
    params.K2Node_Event_bHit = (bool)K2Node_Event_bHit;
    params.K2Node_Event_bBlocked = (bool)K2Node_Event_bBlocked;
    params.K2Node_Event_bFailed = (bool)K2Node_Event_bFailed;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_TargetLocation = (FVector)K2Node_Event_TargetLocation;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_GetInstigator_ReturnValue = (APawn*)CallFunc_GetInstigator_ReturnValue;
    params.CallFunc_K2_GetComponentToWorld_ReturnValue = (FTransform)CallFunc_K2_GetComponentToWorld_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue_1 = (AActor*)CallFunc_GetOwner_ReturnValue_1;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.K2Node_ClassDynamicCast_AsMunition_Type_Subsonic_Spell = (UClass*)K2Node_ClassDynamicCast_AsMunition_Type_Subsonic_Spell;
    params.K2Node_ClassDynamicCast_bSuccess = (bool)K2Node_ClassDynamicCast_bSuccess;
    params.CallFunc_FinishSpawningActor_ReturnValue = (AActor*)CallFunc_FinishSpawningActor_ReturnValue;
    params.CallFunc_IsValidClass_ReturnValue = (bool)CallFunc_IsValidClass_ReturnValue;
    params.CallFunc_DoDamageTarget_OutDamageInfo = (FDamageInfo)CallFunc_DoDamageTarget_OutDamageInfo;
    params.CallFunc_DoDamageTarget_ReturnValue = (bool)CallFunc_DoDamageTarget_ReturnValue;
    params.K2Node_DynamicCast_AsExplosive_Barrel = (AExplosiveBarrel*)K2Node_DynamicCast_AsExplosive_Barrel;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_AddVelocityTracker_ReturnValue = (UVelocityTrackerComponent*)CallFunc_AddVelocityTracker_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.K2Node_DynamicCast_AsEnemy_AIWeapon = (AEnemyAIWeapon*)K2Node_DynamicCast_AsEnemy_AIWeapon;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_SubSonic_PlayerOppugnoPhysReplacement_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_PlayerOppugnoPhysReplacement.BP_SubSonic_PlayerOppugnoPhysReplacement_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
