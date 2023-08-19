#pragma once
#include <cstdint>
#include "FAkExternalSourceInfo.hpp"
#include "FVector.hpp"
#include "UAnimNotify.hpp"
class UAkAudioEvent;
class USkeletalMeshComponent;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAnimNotify_AkEvent_C : public UAnimNotify {
public:
    FString Attach_Name; // 0x38
    UAkAudioEvent* Event; // 0x48
    bool Follow; // 0x50
    char pad_51[0x7];
    FString EventName; // 0x58
    static UAnimNotify_AkEvent_C* StaticClass();
    bool Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}; // Size: 0x68
#pragma pack(pop)
