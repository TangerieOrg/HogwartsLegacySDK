#pragma once
#include <cstdint>
#include "FNoiseParams2D.hpp"
#include "UDynamicNoiseNormalsBase.hpp"
#pragma pack(push, 1)
class UDynamicNoiseNormals : public UDynamicNoiseNormalsBase {
public:
    FNoiseParams2D NoiseParams; // 0x58
    float TimeFactor; // 0x6c
    static UDynamicNoiseNormals* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
