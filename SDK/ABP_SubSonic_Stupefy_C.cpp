#include "AActor.hpp"
#include "ABP_FS_SpellImpactNew_C.hpp"
#include "ABP_SubSonic_Stupefy_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
void ABP_SubSonic_Stupefy_C::OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C.OnHit"));
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
ABP_SubSonic_Stupefy_C* ABP_SubSonic_Stupefy_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C");
    return (ABP_SubSonic_Stupefy_C*)res;
}
void ABP_SubSonic_Stupefy_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Stupefy_C::ExecuteUbergraph_BP_SubSonic_Stupefy(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Subtract_VectorVector_ReturnValue, UGeometryCollectionComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, ABP_FS_SpellImpactNew_C* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Stupefy.BP_SubSonic_Stupefy_C.ExecuteUbergraph_BP_SubSonic_Stupefy"));
    struct Params_ExecuteUbergraph_BP_SubSonic_Stupefy {
        int32_t EntryPoint; // 0x0
        FHitResult K2Node_Event_HitResult; // 0x4
        bool K2Node_Event_bDestroyed; // 0x8c
        bool K2Node_Event_bHit; // 0x8d
        bool K2Node_Event_bBlocked; // 0x8e
        bool K2Node_Event_bFailed; // 0x8f
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x90
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x91
        char pad_92[0x2];
        float CallFunc_BreakHitResult_Time; // 0x94
        float CallFunc_BreakHitResult_Distance; // 0x98
        FVector CallFunc_BreakHitResult_Location; // 0x9c
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0xa8
        FVector CallFunc_BreakHitResult_Normal; // 0xb4
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0xc0
        char pad_cc[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0xd0
        AActor* CallFunc_BreakHitResult_HitActor; // 0xd8
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0xe0
        FName CallFunc_BreakHitResult_HitBoneName; // 0xe8
        int32_t CallFunc_BreakHitResult_HitItem; // 0xf0
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0xf4
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0xf8
        FVector CallFunc_BreakHitResult_TraceStart; // 0xfc
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x108
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x114
        UGeometryCollectionComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x120
        FVector CallFunc_Normal_ReturnValue; // 0x128
        bool CallFunc_IsValid_ReturnValue; // 0x134
        bool CallFunc_IsValid_ReturnValue_1; // 0x135
        char pad_136[0x2];
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x138
        char pad_144[0x4];
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x148
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x150
        char pad_15c[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x160
        ABP_FS_SpellImpactNew_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x190
    }; // Size: 0x198
    Params_ExecuteUbergraph_BP_SubSonic_Stupefy params{};
    params.EntryPoint = (int32_t)EntryPoint;
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
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UGeometryCollectionComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_FS_SpellImpactNew_C*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
}
