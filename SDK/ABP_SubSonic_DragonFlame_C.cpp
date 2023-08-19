#include "AActor.hpp"
#include "ABP_SubSonic_DragonFlame_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "ECollisionChannel.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_SubSonic_DragonFlame_C* ABP_SubSonic_DragonFlame_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C");
    return (ABP_SubSonic_DragonFlame_C*)res;
}
void ABP_SubSonic_DragonFlame_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_DragonFlame_C::OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.OnFire"));
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
void ABP_SubSonic_DragonFlame_C::OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.OnHit"));
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
void ABP_SubSonic_DragonFlame_C::OnFizzle0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.OnFizzle"));
    struct Params_OnFizzle {
    }; // Size: 0x0
    Params_OnFizzle params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_DragonFlame_C::ExecuteUbergraph_BP_SubSonic_DragonFlame(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.ExecuteUbergraph_BP_SubSonic_DragonFlame"));
    struct Params_ExecuteUbergraph_BP_SubSonic_DragonFlame {
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
        bool CallFunc_IsValid_ReturnValue; // 0x114
        ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue; // 0x115
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x116
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x117
        FRotator CallFunc_Conv_VectorToRotator_ReturnValue; // 0x118
        bool CallFunc_BooleanOR_ReturnValue; // 0x124
        char pad_125[0x3];
        UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue; // 0x128
        AActor* K2Node_Event_Target; // 0x130
        FVector K2Node_Event_TargetLocation; // 0x138
        FVector K2Node_Event_Velocity; // 0x144
    }; // Size: 0x150
    Params_ExecuteUbergraph_BP_SubSonic_DragonFlame params{};
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
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetCollisionObjectType_ReturnValue = (ECollisionChannel)CallFunc_GetCollisionObjectType_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_Conv_VectorToRotator_ReturnValue = (FRotator)CallFunc_Conv_VectorToRotator_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_SpawnSystemAtLocation_ReturnValue = (UNiagaraComponent*)CallFunc_SpawnSystemAtLocation_ReturnValue;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_TargetLocation = (FVector)K2Node_Event_TargetLocation;
    params.K2Node_Event_Velocity = (FVector)K2Node_Event_Velocity;
    ProcessEvent(func, &params);
}
void ABP_SubSonic_DragonFlame_C::EndTrailFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_DragonFlame.BP_SubSonic_DragonFlame_C.EndTrailFX"));
    struct Params_EndTrailFX {
    }; // Size: 0x0
    Params_EndTrailFX params{};
    ProcessEvent(func, &params);
}
