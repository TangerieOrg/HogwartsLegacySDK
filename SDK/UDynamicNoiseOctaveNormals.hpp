#pragma once
#include <cstdint>
#include "FOctaveNoiseParams.hpp"
#include "UDynamicNoiseNormalsBase.hpp"
#pragma pack(push, 1)
class UDynamicNoiseOctaveNormals : public UDynamicNoiseNormalsBase {
public:
    FOctaveNoiseParams NoiseParams; // 0x58
    float TimeFactor; // 0x74
    static UDynamicNoiseOctaveNormals* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
