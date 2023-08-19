#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "ECollisionChannel.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UParticleSystemComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_SubSonic_DragonFire_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    UParticleSystemComponent* ParticleSystem; // 0x540
    UNiagaraComponent* N_GroundFire_Trail; // 0x548
    UStaticMeshComponent* SM_Aguamenti_WaterProj; // 0x550
    UMaterialInstanceDynamic* MAT_RibbonTRail; // 0x558
    UMaterialInstanceDynamic* MAT_Proj; // 0x560
    FVector LOC_Target; // 0x568
    char pad_574[0x4];
    static ABP_SubSonic_DragonFire_C* StaticClass();
    void EndTrailFX();
    void OnFizzle0();
    void OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity);
    void OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SubSonic_DragonFire(int32_t EntryPoint, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
}; // Size: 0x578
#pragma pack(pop)
