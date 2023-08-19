#pragma once
#include <cstdint>
#include "FRootMotionSource.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class AActor;
class UCurveFloat;
#pragma pack(push, 1)
struct FRootMotionSource_RadialForce : public FRootMotionSource {
    char pad_a0[0x8];
    AActor* locationActor; // 0xa8
    float Radius; // 0xb0
    float Strength; // 0xb4
    bool bIsPush; // 0xb8
    bool bNoZForce; // 0xb9
    char pad_ba[0x6];
    UCurveFloat* StrengthDistanceFalloff; // 0xc0
    UCurveFloat* StrengthOverTime; // 0xc8
    bool bUseFixedWorldDirection; // 0xd0
    char pad_d1[0x3];
    FRotator FixedWorldDirection; // 0xd4
}; // Size: 0xe0
#pragma pack(pop)
