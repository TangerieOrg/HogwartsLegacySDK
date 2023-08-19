#pragma once
#include <cstdint>
#include "ETraceTypeQuery.hpp"
#include "FVector.hpp"
#include "UTransformProvider.hpp"
class UVectorProvider;
#pragma pack(push, 1)
class UTransform_CastRay : public UTransformProvider {
public:
    UTransformProvider* RaycastStart; // 0x28
    UTransformProvider* ComponentTransform; // 0x30
    UVectorProvider* Direction; // 0x38
    FVector ForwardDirection; // 0x40
    float SearchDistance; // 0x4c
    float OffsetDistance; // 0x50
    ETraceTypeQuery TraceType; // 0x54
    char pad_55[0x3];
    static UTransform_CastRay* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
