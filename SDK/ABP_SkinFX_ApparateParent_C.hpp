#pragma once
#include <cstdint>
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UTimelineComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class AActor;
class UCapsuleComponent;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_SkinFX_ApparateParent_C : public ABP_SkinFX_Graph_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5d0
    float Appear_RotationBlend_C881C9494301D8595640F9BBD86064CA; // 0x5d8
    float Appear_Collapse_C881C9494301D8595640F9BBD86064CA; // 0x5dc
    float Appear_Rotation_Amount_C881C9494301D8595640F9BBD86064CA; // 0x5e0
    ETimelineDirection::Type Appear__Direction_C881C9494301D8595640F9BBD86064CA; // 0x5e4
    char pad_5e5[0x3];
    UTimelineComponent* Appear; // 0x5e8
    float Dissapear_Rotation_Blend_73E7A023474E36B120363C82FCBB7787; // 0x5f0
    float Dissapear_Collapse_73E7A023474E36B120363C82FCBB7787; // 0x5f4
    float Dissapear_Rotation_Amount_73E7A023474E36B120363C82FCBB7787; // 0x5f8
    ETimelineDirection::Type Dissapear__Direction_73E7A023474E36B120363C82FCBB7787; // 0x5fc
    char pad_5fd[0x3];
    UTimelineComponent* Dissapear; // 0x600
    FLinearColor Color; // 0x608
    float FadeOutStart; // 0x618
    FVector Center; // 0x61c
    FVector Scale; // 0x628
    bool Use_Specific_Rotation_Axis; // 0x634
    char pad_635[0x3];
    float Offset; // 0x638
    char pad_63c[0x4];
    UParticleSystemComponent* Effect; // 0x640
    FVector CentreOffset; // 0x648
    float ScaleMultiplier; // 0x654
    FVector Initial_Rotation; // 0x658
    FVector Final_Rotation; // 0x664
    static ABP_SkinFX_ApparateParent_C* StaticClass();
    void GetActorBoundsComponent(USceneComponent*& ActorComponent, AActor* CallFunc_SkinFXGetAffectedActor_AffectedActor, UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsAHouseElf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2);
    void Dissapear__FinishedFunc();
    void Dissapear__UpdateFunc();
    void Appear__FinishedFunc();
    void Appear__UpdateFunc();
    void SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime);
    void SkinFXUpdateTick(float DeltaTime);
    void Apparate();
    void Disapparate();
    void Initialise();
    void OnApparateFinished();
    void OnDisapparateFinished();
    void SkinFXInitialUpdate();
    void ExecuteUbergraph_BP_SkinFX_ApparateParent(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x670
#pragma pack(pop)
