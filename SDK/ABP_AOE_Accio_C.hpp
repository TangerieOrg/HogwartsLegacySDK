#pragma once
#include <cstdint>
#include "AMunitionType_AOE_MultiFX.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Handle.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPokeNiagaraFXVector.hpp"
#include "FVector.hpp"
class USceneComponent;
class ASpellTool;
class AAccioSpellTool;
class ACharacter;
class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_AOE_Accio_C : public AMunitionType_AOE_MultiFX {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x660
    USceneComponent* DefaultSceneRoot; // 0x668
    static ABP_AOE_Accio_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnHit0(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed);
    void ExecuteUbergraph_BP_AOE_Accio(int32_t EntryPoint, ASpellTool* CallFunc_GetSpellTool_ReturnValue, FMultiFX2Handle CallFunc_GetExplodeFXHandle_ReturnValue, FVector CallFunc_GetMuzzleLocation_ReturnValue, ASpellTool* CallFunc_GetSpellTool_ReturnValue_1, FPokeNiagaraFXVector K2Node_MakeStruct_PokeNiagaraFXVector, AAccioSpellTool* K2Node_DynamicCast_AsAccio_Spell_Tool, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FXPokeNiagaraVector_bSuccess, ACharacter* CallFunc_GetCharacter_ReturnValue, FMunitionImpactData K2Node_Event_MunitionImpact, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float K2Node_Event_DeltaSeconds, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue);
}; // Size: 0x670
#pragma pack(pop)
