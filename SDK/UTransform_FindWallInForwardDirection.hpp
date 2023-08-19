#pragma once
#include <cstdint>
#include "ETraceTypeQuery.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_FindWallInForwardDirection : public UTransformProvider {
public:
    float verticalOffset; // 0x28
    float SearchDistance; // 0x2c
    float SphereRadius; // 0x30
    char pad_34[0x4];
    UTransformProvider* RaycastStart; // 0x38
    ETraceTypeQuery TraceType; // 0x40
    char pad_41[0x7];
    static UTransform_FindWallInForwardDirection* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
