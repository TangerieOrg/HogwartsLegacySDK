#pragma once
#include <cstdint>
#include "FLinearizedPath.hpp"
#include "USplineComponent.hpp"
#pragma pack(push, 1)
class UPathComponent : public USplineComponent {
public:
    char pad_580[0x60];
    int64_t UUID; // 0x5e0
    TArray<float> ControlPointMap; // 0x5e8
    char pad_5f8[0x8];
    static UPathComponent* StaticClass();
}; // Size: 0x600
#pragma pack(pop)
