#pragma once
#include <cstdint>
#include "EMovementSensorType.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMovementSensorInfo {
    EMovementSensorType SensorType; // 0x0
    char pad_1[0x3];
    FVector Location; // 0x4
    FVector Normal; // 0x10
    FVector MoveNormal; // 0x1c
    char pad_28[0x8];
    FTransform MoveTransform; // 0x30
    FVector MoveVelocity; // 0x60
    float Time; // 0x6c
    float TimeUntilImpact; // 0x70
    char pad_74[0xc];
}; // Size: 0x80
#pragma pack(pop)
