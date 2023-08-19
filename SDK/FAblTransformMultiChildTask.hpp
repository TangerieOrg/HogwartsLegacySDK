#pragma once
#include <cstdint>
#include "FTransform.hpp"
class UCurveVector;
#pragma pack(push, 1)
struct FAblTransformMultiChildTask {
    FName ChildName; // 0x0
    char pad_8[0x8];
    FTransform InitTransform; // 0x10
    FTransform DeltaTransform; // 0x40
    UCurveVector* DeltaTranslate; // 0x70
    UCurveVector* DeltaRotate; // 0x78
    UCurveVector* DeltaScale; // 0x80
    char pad_88[0x8];
}; // Size: 0x90
#pragma pack(pop)
