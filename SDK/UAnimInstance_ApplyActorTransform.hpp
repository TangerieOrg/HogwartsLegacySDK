#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UAnimInstance_ApplyActorTransform : public UAnimInstance {
public:
    FTransform ActorInWorldSpace; // 0x2c0
    bool ShouldSetActorInWorldSpace; // 0x2f0
    char pad_2f1[0xf];
    static UAnimInstance_ApplyActorTransform* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
