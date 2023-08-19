#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "ECollisionChannel.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
class UStaticMeshComponent;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_SubSonic_DragonFlame_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    UNiagaraComponent* N_GroundFire_Trail; // 0x540
    UStaticMeshComponent* SM_Aguamenti_WaterProj; // 0x548
    float ScaleValue; // 0x550
    FVector LocTarget; // 0x554
    static ABP_SubSonic_DragonFlame_C* StaticClass();
    void ReceiveBeginPlay();
    void OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void OnFizzle0();
    void OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity);
    void EndTrailFX();
    void ExecuteUbergraph_BP_SubSonic_DragonFlame(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, AActor* K2Node_Event_Target, FVector K2Node_Event_TargetLocation, FVector K2Node_Event_Velocity);
}; // Size: 0x560
#pragma pack(pop)
