#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAnimNotify.hpp"
class UClass;
class USkeletalMeshComponent;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UBP_AnimNotify_CameraShake_C : public UAnimNotify {
public:
    UClass* CameraShake; // 0x38
    float Radius; // 0x40
    char pad_44[0x4];
    static UBP_AnimNotify_CameraShake_C* StaticClass();
    bool Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}; // Size: 0x48
#pragma pack(pop)
