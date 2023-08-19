#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeletalMeshComponent;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAnimNotifyState : public UObject {
public:
    char pad_28[0x8];
    static UAnimNotifyState* StaticClass();
    bool Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
    FString GetNotifyName();
}; // Size: 0x30
#pragma pack(pop)
