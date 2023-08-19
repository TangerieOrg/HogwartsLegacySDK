#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
class UPointLightComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class AActor;
#pragma pack(push, 1)
class ABP_SubSonic_Sorcerer_Flame_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    UNiagaraComponent* N_GroundFire; // 0x540
    UNiagaraComponent* Niagara; // 0x548
    UPointLightComponent* PointLight; // 0x550
    UStaticMeshComponent* SM_Aguamenti_WaterProj; // 0x558
    UMaterialInstanceDynamic* MAT_RibbonTRail; // 0x560
    UMaterialInstanceDynamic* MAT_Proj; // 0x568
    FVector LOC_Target; // 0x570
    char pad_57c[0x4];
    static ABP_SubSonic_Sorcerer_Flame_C* StaticClass();
    void ReceiveBeginPlay();
    void OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity);
    void EndTrailFX();
    void OnFizzle0();
    void ExecuteUbergraph_BP_SubSonic_Sorcerer_Flame(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity);
}; // Size: 0x580
#pragma pack(pop)
