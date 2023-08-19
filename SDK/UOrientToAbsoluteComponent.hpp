#pragma once
#include <cstdint>
#include "FOrientToSlerp.hpp"
#include "FRotator.hpp"
#include "UOrientToComponent.hpp"
#pragma pack(push, 1)
class UOrientToAbsoluteComponent : public UOrientToComponent {
public:
    FRotator WorldRotation; // 0x220
    FOrientToSlerp Smoothing; // 0x22c
    char pad_238[0x8];
    static UOrientToAbsoluteComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
