#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UAnimSequence;
class UAnimationSharingStateProcessor;
class UEnum;
#pragma pack(push, 1)
class UAnimSharingInstance : public UObject {
public:
    TArray<AActor*> RegisteredActors; // 0x28
    char pad_38[0x50];
    UAnimationSharingStateProcessor* StateProcessor; // 0x88
    char pad_90[0x38];
    TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
    char pad_d8[0x10];
    UEnum* StateEnum; // 0xe8
    AActor* SharingActor; // 0xf0
    char pad_f8[0x28];
    static UAnimSharingInstance* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
