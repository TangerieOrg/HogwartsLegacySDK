#include "AActor.hpp"
#include "ABP_AOE_Levioso_C.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "ASpellTool.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULeviosoComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void ABP_AOE_Levioso_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Levioso.BP_AOE_Levioso_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_AOE_Levioso_C* ABP_AOE_Levioso_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_Levioso.BP_AOE_Levioso_C");
    return (ABP_AOE_Levioso_C*)res;
}
void ABP_AOE_Levioso_C::OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Levioso.BP_AOE_Levioso_C.OnHit"));
    struct Params_OnHit {
        FMunitionImpactData MunitionImpact; // 0x0
        FHitResult HitResult; // 0xf0
        bool bHit; // 0x178
        bool bBlocked; // 0x179
        bool bFailed; // 0x17a
    }; // Size: 0x17b
    Params_OnHit params{};
    params.MunitionImpact = (FMunitionImpactData)MunitionImpact;
    params.HitResult = (FHitResult)HitResult;
    params.bHit = (bool)bHit;
    params.bBlocked = (bool)bBlocked;
    params.bFailed = (bool)bFailed;
    ProcessEvent(func, &params);
    MunitionImpact = params.MunitionImpact;
    HitResult = params.HitResult;
}
void ABP_AOE_Levioso_C::ExecuteUbergraph_BP_AOE_Levioso(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, ASpellTool* K2Node_DynamicCast_AsSpell_Tool, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetCharacterActor_ReturnValue, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UActorComponent* CallFunc_CreateImpactComponent_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, ULeviosoComponent* K2Node_DynamicCast_AsLevioso_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetRemainingTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Levioso.BP_AOE_Levioso_C.ExecuteUbergraph_BP_AOE_Levioso"));
    struct Params_ExecuteUbergraph_BP_AOE_Levioso {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x8
        ASpellTool* K2Node_DynamicCast_AsSpell_Tool; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        AActor* CallFunc_GetCharacterActor_ReturnValue; // 0x20
        FMunitionImpactData K2Node_Event_MunitionImpact; // 0x28
        FHitResult K2Node_Event_HitResult; // 0x118
        bool K2Node_Event_bHit; // 0x1a0
        bool K2Node_Event_bBlocked; // 0x1a1
        bool K2Node_Event_bFailed; // 0x1a2
        char pad_1a3[0x1];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x1a4
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x1b0
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x1b1
        char pad_1b2[0x2];
        float CallFunc_BreakHitResult_Time; // 0x1b4
        float CallFunc_BreakHitResult_Distance; // 0x1b8
        FVector CallFunc_BreakHitResult_Location; // 0x1bc
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0x1c8
        FVector CallFunc_BreakHitResult_Normal; // 0x1d4
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x1e0
        char pad_1ec[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x1f0
        AActor* CallFunc_BreakHitResult_HitActor; // 0x1f8
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x200
        FName CallFunc_BreakHitResult_HitBoneName; // 0x208
        int32_t CallFunc_BreakHitResult_HitItem; // 0x210
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x214
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x218
        FVector CallFunc_BreakHitResult_TraceStart; // 0x21c
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x228
        char pad_234[0x4];
        UActorComponent* CallFunc_CreateImpactComponent_ReturnValue; // 0x238
        FString CallFunc_GetDisplayName_ReturnValue; // 0x240
        ULeviosoComponent* K2Node_DynamicCast_AsLevioso_Component; // 0x250
        bool K2Node_DynamicCast_bSuccess_1; // 0x258
        char pad_259[0x3];
        float CallFunc_GetRemainingTime_ReturnValue; // 0x25c
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x260
        char pad_261[0x3];
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x264
        FVector CallFunc_Normal_ReturnValue; // 0x270
    }; // Size: 0x27c
    Params_ExecuteUbergraph_BP_AOE_Levioso params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_DynamicCast_AsSpell_Tool = (ASpellTool*)K2Node_DynamicCast_AsSpell_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetCharacterActor_ReturnValue = (AActor*)CallFunc_GetCharacterActor_ReturnValue;
    params.K2Node_Event_MunitionImpact = (FMunitionImpactData)K2Node_Event_MunitionImpact;
    params.K2Node_Event_HitResult = (FHitResult)K2Node_Event_HitResult;
    params.K2Node_Event_bHit = (bool)K2Node_Event_bHit;
    params.K2Node_Event_bBlocked = (bool)K2Node_Event_bBlocked;
    params.K2Node_Event_bFailed = (bool)K2Node_Event_bFailed;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
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
    params.CallFunc_CreateImpactComponent_ReturnValue = (UActorComponent*)CallFunc_CreateImpactComponent_ReturnValue;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.K2Node_DynamicCast_AsLevioso_Component = (ULeviosoComponent*)K2Node_DynamicCast_AsLevioso_Component;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetRemainingTime_ReturnValue = (float)CallFunc_GetRemainingTime_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    ProcessEvent(func, &params);
}
