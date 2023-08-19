#pragma once
#include <cstdint>
#include "EComponentMobility\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class USceneComponent;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UBP_WorldEvent_DropComponentsToGround_C : public UActorComponent {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    TArray<USceneComponent*> SceneComponentsToDrop; // 0xd0
    bool DropToGround; // 0xe0
    bool RotateToGround; // 0xe1
    bool UseCollisionCenter; // 0xe2
    char pad_e3[0x1];
    FVector TraceStartOffset; // 0xe4
    float TraceLength; // 0xf0
    FVector DropLocOffset; // 0xf4
    bool AddRandomZRotation; // 0x100
    EComponentMobility::Type PrevMobility; // 0x101
    char pad_102[0x6];
    static UBP_WorldEvent_DropComponentsToGround_C* StaticClass();
    void DropComponentToGround(USceneComponent* Component, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_GetForwardVector_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector K2Node_Select_Default, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_RandomFloatInRange_ReturnValue_1, TArray<AActor*>& Temp_object_Variable, FVector K2Node_MathExpression_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue, FVector CallFunc_ProjectVectorOnToPlane_ReturnValue_1, FRotator CallFunc_MakeRotFromXZ_ReturnValue, FRotator CallFunc_MakeRotFromXZ_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2);
    void StartDroppingComponents();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BP_WorldEvent_DropComponentsToGround(int32_t EntryPoint, float K2Node_Event_DeltaSeconds, USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
}; // Size: 0x108
#pragma pack(pop)
