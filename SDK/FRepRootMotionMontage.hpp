#pragma once
#include <cstdint>
#include "FRootMotionSourceGroup.hpp"
#include "FRotator.hpp"
#include "FVector_NetQuantize10.hpp"
#include "FVector_NetQuantize100.hpp"
class UAnimMontage;
class UPrimitiveComponent;
#pragma pack(push, 1)
struct FRepRootMotionMontage {
    bool bIsActive; // 0x0
    char pad_1[0x7];
    UAnimMontage* AnimMontage; // 0x8
    float Position; // 0x10
    FVector_NetQuantize100 Location; // 0x14
    FRotator Rotation; // 0x20
    char pad_2c[0x4];
    UPrimitiveComponent* MovementBase; // 0x30
    FName MovementBaseBoneName; // 0x38
    bool bRelativePosition; // 0x40
    bool bRelativeRotation; // 0x41
    char pad_42[0x6];
    FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48
    FVector_NetQuantize10 Acceleration; // 0x80
    FVector_NetQuantize10 LinearVelocity; // 0x8c
}; // Size: 0x98
#pragma pack(pop)
