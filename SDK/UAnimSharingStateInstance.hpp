#pragma once
#include <cstdint>
#include "UAnimInstance.hpp"
class UAnimSequence;
class UAnimSharingInstance;
class AActor;
#pragma pack(push, 1)
class UAnimSharingStateInstance : public UAnimInstance {
public:
    float PermutationTimeOffset; // 0x2c0
    float PlayRate; // 0x2c4
    bool bStateBool; // 0x2c8
    char pad_2c9[0x7];
    UAnimSharingInstance* Instance; // 0x2d0
    char pad_2d8[0x8];
    static UAnimSharingStateInstance* StaticClass();
    void GetInstancedActors(TArray<AActor*>& Actors);
}; // Size: 0x2e0
#pragma pack(pop)
