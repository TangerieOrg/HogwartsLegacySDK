#pragma once
#include <cstdint>
#include "FOrientToSlerp.hpp"
#include "FVector.hpp"
#include "UPointAtComponent.hpp"
#pragma pack(push, 1)
class UPointAtCameraComponent : public UPointAtComponent {
public:
    FVector LocalOffset; // 0x220
    FOrientToSlerp Smoothing; // 0x22c
    char pad_238[0x8];
    static UPointAtCameraComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
