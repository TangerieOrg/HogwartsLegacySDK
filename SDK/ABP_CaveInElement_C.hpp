#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSTR_CaveInParticleElement.hpp"
#include "FSTR_CaveIn_AnimMeshElement.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USceneComponent;
class UTimelineComponent;
class UCurveFloat;
class UStaticMeshComponent;
class UParticleSystemComponent;
#pragma pack(push, 1)
class ABP_CaveInElement_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    float Timeline_0_NewTrack_0_29AA750E4C72F8725583EAAB42D0051F; // 0x258
    ETimelineDirection::Type Timeline_0__Direction_29AA750E4C72F8725583EAAB42D0051F; // 0x25c
    char pad_25d[0x3];
    UTimelineComponent* Timeline_0; // 0x260
    float AnimateMesh_AnimCurve_568FD24F4E35F1791EE50498ABFB00C3; // 0x268
    ETimelineDirection::Type AnimateMesh__Direction_568FD24F4E35F1791EE50498ABFB00C3; // 0x26c
    char pad_26d[0x3];
    UTimelineComponent* AnimateMesh; // 0x270
    char pad_278[0x8];
    FTransform InitialTransform; // 0x280
    UCurveFloat* DefualtCurve; // 0x2b0
    FVector CurrentLocation; // 0x2b8
    FVector InitialScale; // 0x2c4
    bool UseShake; // 0x2d0
    char pad_2d1[0xf];
    static ABP_CaveInElement_C* StaticClass();
    void AnimateMesh__FinishedFunc();
    void AnimateMesh__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ProcessElement(FSTR_CaveIn_AnimMeshElement MeshStruct, FSTR_CaveInParticleElement ParticleStruct);
    void RemoveMesh(UStaticMeshComponent* NewParam);
    void ExecuteUbergraph_BP_CaveInElement(int32_t EntryPoint, FSTR_CaveIn_AnimMeshElement K2Node_CustomEvent_MeshStruct, FSTR_CaveInParticleElement K2Node_CustomEvent_ParticleStruct, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_1, FTransform CallFunc_GetTransform_ReturnValue, UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_ComposeRotators_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_TLerp_ReturnValue, UStaticMeshComponent* K2Node_CustomEvent_NewParam, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_VLerp_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult);
}; // Size: 0x2e0
#pragma pack(pop)
