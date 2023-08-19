#pragma once
#include <cstdint>
#include "ETraceTypeQuery.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_FindLedgeFromAbove : public UTransformProvider {
public:
    float horizontalOffset; // 0x28
    float InitialHeight; // 0x2c
    float SearchDistance; // 0x30
    float SphereRadius; // 0x34
    UTransformProvider* RaycastStart; // 0x38
    ETraceTypeQuery TraceType; // 0x40
    char pad_41[0x7];
    static UTransform_FindLedgeFromAbove* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
