#pragma once
#include <cstdint>
#include "AMunitionType_Subsonic.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
class UInteractionArchitectAsset;
class UPhysicalMaterial;
class UGeometryCollectionComponent;
class AActor;
class UPrimitiveComponent;
class ACharacter;
#pragma pack(push, 1)
class ABP_SubSonic_ConfringoProjectile_C : public AMunitionType_Subsonic {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x468
    UNiagaraComponent* N_Trail; // 0x470
    float ScaleValue; // 0x478
    float Field_Radius; // 0x47c
    FTransform Field_Transform; // 0x480
    TArray<UInteractionArchitectAsset*> Munition_Data_Assets; // 0x4b0
    static ABP_SubSonic_ConfringoProjectile_C* StaticClass();
    void ReceiveBeginPlay();
    void OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void CustomEvent();
    void CustomEvent_2();
    void ExecuteUbergraph_BP_SubSonic_ConfringoProjectile(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Subtract_VectorVector_ReturnValue, UGeometryCollectionComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetOnFire_ReturnValue);
}; // Size: 0x4c0
#pragma pack(pop)
