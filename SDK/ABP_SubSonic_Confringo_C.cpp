#include "AActor.hpp"
#include "ABP_FS_SpellImpactNew_C.hpp"
#include "ABP_SubSonic_Confringo_C.hpp"
#include "AConfringoSpellTool.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "ASpellTool.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UArrowComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollectionComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPointLightComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UWindDirectionalSourceWithEnvelopeComponent.hpp"
ABP_SubSonic_Confringo_C* ABP_SubSonic_Confringo_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_Confringo.BP_SubSonic_Confringo_C");
    return (ABP_SubSonic_Confringo_C*)res;
}
void ABP_SubSonic_Confringo_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Confringo.BP_SubSonic_Confringo_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Confringo_C::OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Confringo.BP_SubSonic_Confringo_C.OnHit"));
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
void ABP_SubSonic_Confringo_C::OnFizzle0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Confringo.BP_SubSonic_Confringo_C.OnFizzle"));
    struct Params_OnFizzle {
    }; // Size: 0x0
    Params_OnFizzle params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Confringo_C::OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Confringo.BP_SubSonic_Confringo_C.OnFire"));
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
void ABP_SubSonic_Confringo_C::EndTrailFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Confringo.BP_SubSonic_Confringo_C.EndTrailFX"));
    struct Params_EndTrailFX {
    }; // Size: 0x0
    Params_EndTrailFX params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_Confringo_C::ExecuteUbergraph_BP_SubSonic_Confringo(int32_t EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Subtract_VectorVector_ReturnValue, UGeometryCollectionComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity, bool Temp_bool_IsClosed_Variable, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ASpellTool* CallFunc_GetSpellTool_ReturnValue, AConfringoSpellTool* K2Node_DynamicCast_AsConfringo_Spell_Tool, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetExplosionRadius_ReturnValue, ABP_FS_SpellImpactNew_C* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_Confringo.BP_SubSonic_Confringo_C.ExecuteUbergraph_BP_SubSonic_Confringo"));
    struct Params_ExecuteUbergraph_BP_SubSonic_Confringo {
        int32_t EntryPoint; // 0x0
        bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x4
        bool Temp_bool_Has_Been_Initd_Variable; // 0x5
        char pad_6[0x2];
        FHitResult K2Node_Event_HitResult; // 0x8
        bool K2Node_Event_bDestroyed; // 0x90
        bool K2Node_Event_bHit; // 0x91
        bool K2Node_Event_bBlocked; // 0x92
        bool K2Node_Event_bFailed; // 0x93
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x94
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x95
        char pad_96[0x2];
        float CallFunc_BreakHitResult_Time; // 0x98
        float CallFunc_BreakHitResult_Distance; // 0x9c
        FVector CallFunc_BreakHitResult_Location; // 0xa0
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0xac
        FVector CallFunc_BreakHitResult_Normal; // 0xb8
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0xc4
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
        AActor* K2Node_Event_Target; // 0x138
        FVector K2Node_Event_TargetLocation; // 0x140
        FVector K2Node_Event_Velocity; // 0x14c
        bool Temp_bool_IsClosed_Variable; // 0x158
        char pad_159[0x7];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x160
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x190
        ASpellTool* CallFunc_GetSpellTool_ReturnValue; // 0x198
        AConfringoSpellTool* K2Node_DynamicCast_AsConfringo_Spell_Tool; // 0x1a0
        bool K2Node_DynamicCast_bSuccess; // 0x1a8
        char pad_1a9[0x3];
        float CallFunc_GetExplosionRadius_ReturnValue; // 0x1ac
        ABP_FS_SpellImpactNew_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x1b0
    }; // Size: 0x1b8
    Params_ExecuteUbergraph_BP_SubSonic_Confringo params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = (bool)Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
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
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_TargetLocation = (FVector)K2Node_Event_TargetLocation;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_GetSpellTool_ReturnValue = (ASpellTool*)CallFunc_GetSpellTool_ReturnValue;
    params.K2Node_DynamicCast_AsConfringo_Spell_Tool = (AConfringoSpellTool*)K2Node_DynamicCast_AsConfringo_Spell_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetExplosionRadius_ReturnValue = (float)CallFunc_GetExplosionRadius_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_FS_SpellImpactNew_C*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
}
