#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class USceneComponent;
class UNiagaraComponent;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_SubSonic_Levioso_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    UStaticMeshComponent* StaticMesh; // 0x540
    USceneComponent* Scene; // 0x548
    UNiagaraComponent* Niagara; // 0x550
    AActor* Target; // 0x558
    bool HasTarget; // 0x560
    char pad_561[0x3];
    FVector Velocity; // 0x564
    float Speed; // 0x570
    float DistanceMin; // 0x574
    float DistanceMax; // 0x578
    FVector Direction; // 0x57c
    FVector Offset; // 0x588
    char pad_594[0x4];
    static ABP_SubSonic_Levioso_C* StaticClass();
    void Update_Velocity();
    void MoveSphere();
    void Loop();
    void OnHit0(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_SubSonic_Levioso(int32_t EntryPoint, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd);
}; // Size: 0x598
#pragma pack(pop)
