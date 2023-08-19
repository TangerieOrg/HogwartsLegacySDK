#pragma once
#include <cstdint>
#include "UInterpGroup.hpp"
class UCameraAnim;
#pragma pack(push, 1)
class UInterpGroupCamera : public UInterpGroup {
public:
    UCameraAnim* CameraAnimInst; // 0x50
    float CompressTolerance; // 0x58
    char pad_5c[0x4];
    static UInterpGroupCamera* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
