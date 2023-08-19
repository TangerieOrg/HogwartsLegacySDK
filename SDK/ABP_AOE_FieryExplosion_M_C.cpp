#include "AActor.hpp"
#include "ABP_AOE_FieryExplosion_M_C.hpp"
#include "ACharacter.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
ABP_AOE_FieryExplosion_M_C* ABP_AOE_FieryExplosion_M_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_FieryExplosion_M.BP_AOE_FieryExplosion_M_C");
    return (ABP_AOE_FieryExplosion_M_C*)res;
}
void ABP_AOE_FieryExplosion_M_C::OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_FieryExplosion_M.BP_AOE_FieryExplosion_M_C.OnHit"));
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
void ABP_AOE_FieryExplosion_M_C::ExecuteUbergraph_BP_AOE_FieryExplosion_M(int32_t EntryPoint, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetOnFire_ReturnValue, bool CallFunc_DoDamageOverTime_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_FieryExplosion_M.BP_AOE_FieryExplosion_M_C.ExecuteUbergraph_BP_AOE_FieryExplosion_M"));
    struct Params_ExecuteUbergraph_BP_AOE_FieryExplosion_M {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FMunitionImpactData K2Node_Event_MunitionImpact; // 0x8
        FHitResult K2Node_Event_HitResult; // 0xf8
        bool K2Node_Event_bHit; // 0x180
        bool K2Node_Event_bBlocked; // 0x181
        bool K2Node_Event_bFailed; // 0x182
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x183
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x184
        char pad_185[0x3];
        float CallFunc_BreakHitResult_Time; // 0x188
        float CallFunc_BreakHitResult_Distance; // 0x18c
        FVector CallFunc_BreakHitResult_Location; // 0x190
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0x19c
        FVector CallFunc_BreakHitResult_Normal; // 0x1a8
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x1b4
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x1c0
        AActor* CallFunc_BreakHitResult_HitActor; // 0x1c8
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x1d0
        FName CallFunc_BreakHitResult_HitBoneName; // 0x1d8
        int32_t CallFunc_BreakHitResult_HitItem; // 0x1e0
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x1e4
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x1e8
        FVector CallFunc_BreakHitResult_TraceStart; // 0x1ec
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x1f8
        char pad_204[0x4];
        ACharacter* K2Node_DynamicCast_AsCharacter; // 0x208
        bool K2Node_DynamicCast_bSuccess; // 0x210
        bool CallFunc_SetOnFire_ReturnValue; // 0x211
        bool CallFunc_DoDamageOverTime_ReturnValue; // 0x212
    }; // Size: 0x213
    Params_ExecuteUbergraph_BP_AOE_FieryExplosion_M params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_MunitionImpact = (FMunitionImpactData)K2Node_Event_MunitionImpact;
    params.K2Node_Event_HitResult = (FHitResult)K2Node_Event_HitResult;
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
    params.K2Node_DynamicCast_AsCharacter = (ACharacter*)K2Node_DynamicCast_AsCharacter;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_SetOnFire_ReturnValue = (bool)CallFunc_SetOnFire_ReturnValue;
    params.CallFunc_DoDamageOverTime_ReturnValue = (bool)CallFunc_DoDamageOverTime_ReturnValue;
    ProcessEvent(func, &params);
}
