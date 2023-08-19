#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USphereComponent;
class UNiagaraComponent;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_SubSonic_DragonFlame_Instakill_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    USphereComponent* MunitionShape; // 0x540
    UNiagaraComponent* N_GroundFire_Trail; // 0x548
    float ScaleValue; // 0x550
    FVector LocTarget; // 0x554
    bool DebugVisualization; // 0x560
    char pad_561[0x7];
    static ABP_SubSonic_DragonFlame_Instakill_C* StaticClass();
    void OnFizzle0();
    void ReceiveBeginPlay();
    void OnFire0(AActor* Target, FVector TargetLocation, FVector Velocity);
    void EndTrailFX();
    void OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void ExecuteUbergraph_BP_SubSonic_DragonFlame_Instakill(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd);
}; // Size: 0x568
#pragma pack(pop)
