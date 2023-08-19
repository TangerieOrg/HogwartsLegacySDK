#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeletalMeshComponent;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAnimNotify : public UObject {
public:
    char pad_28[0x10];
    static UAnimNotify* StaticClass();
    bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
    FString GetNotifyName();
}; // Size: 0x38
#pragma pack(pop)
