#pragma once
#include <cstdint>
#include "ERotatorQuantization.hpp"
#include "EVectorQuantization.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRepMovement {
    FVector LinearVelocity; // 0x0
    FVector AngularVelocity; // 0xc
    FVector Location; // 0x18
    FRotator Rotation; // 0x24
    uint8_t bSimulatedPhysicSleep : 1; // 0x30
    uint8_t bRepPhysics : 1; // 0x30
    uint8_t pad_bitfield_30_2 : 6;
    EVectorQuantization LocationQuantizationLevel; // 0x31
    EVectorQuantization VelocityQuantizationLevel; // 0x32
    ERotatorQuantization RotationQuantizationLevel; // 0x33
}; // Size: 0x34
#pragma pack(pop)
