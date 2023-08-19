#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "USimpleCameraShakePattern.hpp"
#pragma pack(push, 1)
class UConstantCameraShakePattern : public USimpleCameraShakePattern {
public:
    FVector LocationOffset; // 0x38
    FRotator RotationOffset; // 0x44
    static UConstantCameraShakePattern* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
