#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UWindDirectionalSourceWithEnvelopeComponent;
class ABP_FS_SpellImpactNew_C;
class UNiagaraComponent;
class UArrowComponent;
class UPointLightComponent;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UGeometryCollectionComponent;
class ASpellTool;
class AConfringoSpellTool;
#pragma pack(push, 1)
class ABP_SubSonic_Confringo_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    UWindDirectionalSourceWithEnvelopeComponent* WindSource; // 0x540
    UNiagaraComponent* N_Trail; // 0x548
    UArrowComponent* Arrow; // 0x550
    UPointLightComponent* PointLight; // 0x558
    UStaticMeshComponent* SM_Aguamenti_WaterProj; // 0x560
    UMaterialInstanceDynamic* MAT_RibbonTRail; // 0x568
    UMaterialInstanceDynamic* MAT_Proj; // 0x570
    FVector LOC_Target; // 0x578
    char pad_584[0xc];
    FTransform FieldTransform; // 0x590
    float FieldRadius; // 0x5c0
    char pad_5c4[0xc];
    static ABP_SubSonic_Confringo_C* StaticClass();
    void ReceiveBeginPlay();
    void OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity);
    void EndTrailFX();
    void OnFizzle0();
    void ExecuteUbergraph_BP_SubSonic_Confringo(int32_t EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Subtract_VectorVector_ReturnValue, UGeometryCollectionComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity, bool Temp_bool_IsClosed_Variable, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ASpellTool* CallFunc_GetSpellTool_ReturnValue, AConfringoSpellTool* K2Node_DynamicCast_AsConfringo_Spell_Tool, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetExplosionRadius_ReturnValue, ABP_FS_SpellImpactNew_C* CallFunc_FinishSpawningActor_ReturnValue);
}; // Size: 0x5d0
#pragma pack(pop)
