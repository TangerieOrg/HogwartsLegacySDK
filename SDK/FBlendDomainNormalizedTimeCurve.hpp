#pragma once
#include <cstdint>
class UCurveFloat;
#pragma pack(push, 1)
struct FBlendDomainNormalizedTimeCurve {
    UCurveFloat* NormalizedTimeCurve; // 0x0
    bool bMirrorAroundNoon; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
