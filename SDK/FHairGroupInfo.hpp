#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FHairGroupInfo {
    int32_t GroupId; // 0x0
    int32_t NumCurves; // 0x4
    int32_t NumGuides; // 0x8
    int32_t NumCurveVertices; // 0xc
    int32_t NumGuideVertices; // 0x10
    float MaxCurveLength; // 0x14
}; // Size: 0x18
#pragma pack(pop)
