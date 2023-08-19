#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UParticleSystemComponent;
class UCapsuleComponent;
class USceneComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ABP_Protected_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UParticleSystemComponent* VFX_P_DW_Protego_Shield_Loop_Strong; // 0x250
    UCapsuleComponent* bLocked; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    static ABP_Protected_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Protected(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue);
}; // Size: 0x268
#pragma pack(pop)
