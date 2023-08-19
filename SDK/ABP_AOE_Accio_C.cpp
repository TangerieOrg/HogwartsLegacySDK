#include "AAccioSpellTool.hpp"
#include "AActor.hpp"
#include "ABP_AOE_Accio_C.hpp"
#include "ACharacter.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "ASpellTool.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Handle.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPokeNiagaraFXVector.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void ABP_AOE_Accio_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Accio.BP_AOE_Accio_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
ABP_AOE_Accio_C* ABP_AOE_Accio_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_Accio.BP_AOE_Accio_C");
    return (ABP_AOE_Accio_C*)res;
}
void ABP_AOE_Accio_C::OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Accio.BP_AOE_Accio_C.OnHit"));
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
void ABP_AOE_Accio_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Accio.BP_AOE_Accio_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_AOE_Accio_C::ExecuteUbergraph_BP_AOE_Accio(int32_t EntryPoint, ASpellTool* CallFunc_GetSpellTool_ReturnValue, FMultiFX2Handle CallFunc_GetExplodeFXHandle_ReturnValue, FVector CallFunc_GetMuzzleLocation_ReturnValue, ASpellTool* CallFunc_GetSpellTool_ReturnValue_1, FPokeNiagaraFXVector K2Node_MakeStruct_PokeNiagaraFXVector, AAccioSpellTool* K2Node_DynamicCast_AsAccio_Spell_Tool, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FXPokeNiagaraVector_bSuccess, ACharacter* CallFunc_GetCharacter_ReturnValue, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float K2Node_Event_DeltaSeconds, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_AOE_Accio.BP_AOE_Accio_C.ExecuteUbergraph_BP_AOE_Accio"));
    struct Params_ExecuteUbergraph_BP_AOE_Accio {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        ASpellTool* CallFunc_GetSpellTool_ReturnValue; // 0x8
        FMultiFX2Handle CallFunc_GetExplodeFXHandle_ReturnValue; // 0x10
        FVector CallFunc_GetMuzzleLocation_ReturnValue; // 0x18
        char pad_24[0x4];
        ASpellTool* CallFunc_GetSpellTool_ReturnValue_1; // 0x28
        FPokeNiagaraFXVector K2Node_MakeStruct_PokeNiagaraFXVector; // 0x30
        AAccioSpellTool* K2Node_DynamicCast_AsAccio_Spell_Tool; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        bool CallFunc_FXPokeNiagaraVector_bSuccess; // 0x59
        char pad_5a[0x6];
        ACharacter* CallFunc_GetCharacter_ReturnValue; // 0x60
        FMunitionImpactData K2Node_Event_MunitionImpact; // 0x68
        FHitResult K2Node_Event_HitResult; // 0x158
        bool K2Node_Event_bHit; // 0x1e0
        bool K2Node_Event_bBlocked; // 0x1e1
        bool K2Node_Event_bFailed; // 0x1e2
        char pad_1e3[0x1];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x1e4
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x1f0
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x1f1
        char pad_1f2[0x2];
        float CallFunc_BreakHitResult_Time; // 0x1f4
        float CallFunc_BreakHitResult_Distance; // 0x1f8
        FVector CallFunc_BreakHitResult_Location; // 0x1fc
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0x208
        FVector CallFunc_BreakHitResult_Normal; // 0x214
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x220
        char pad_22c[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x230
        AActor* CallFunc_BreakHitResult_HitActor; // 0x238
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x240
        FName CallFunc_BreakHitResult_HitBoneName; // 0x248
        int32_t CallFunc_BreakHitResult_HitItem; // 0x250
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x254
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x258
        FVector CallFunc_BreakHitResult_TraceStart; // 0x25c
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x268
        float K2Node_Event_DeltaSeconds; // 0x274
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x278
        FVector CallFunc_Normal_ReturnValue; // 0x284
    }; // Size: 0x290
    Params_ExecuteUbergraph_BP_AOE_Accio params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetSpellTool_ReturnValue = (ASpellTool*)CallFunc_GetSpellTool_ReturnValue;
    params.CallFunc_GetExplodeFXHandle_ReturnValue = (FMultiFX2Handle)CallFunc_GetExplodeFXHandle_ReturnValue;
    params.CallFunc_GetMuzzleLocation_ReturnValue = (FVector)CallFunc_GetMuzzleLocation_ReturnValue;
    params.CallFunc_GetSpellTool_ReturnValue_1 = (ASpellTool*)CallFunc_GetSpellTool_ReturnValue_1;
    params.K2Node_MakeStruct_PokeNiagaraFXVector = (FPokeNiagaraFXVector)K2Node_MakeStruct_PokeNiagaraFXVector;
    params.K2Node_DynamicCast_AsAccio_Spell_Tool = (AAccioSpellTool*)K2Node_DynamicCast_AsAccio_Spell_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_FXPokeNiagaraVector_bSuccess = (bool)CallFunc_FXPokeNiagaraVector_bSuccess;
    params.CallFunc_GetCharacter_ReturnValue = (ACharacter*)CallFunc_GetCharacter_ReturnValue;
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
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    ProcessEvent(func, &params);
}
