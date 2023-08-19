#pragma once
#include <cstdint>
#include "FPathPointTags.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMapPath : public UObject {
public:
    TArray<FVector> Path; // 0x28
    TArray<UMapPath*> IntersectedPaths; // 0x38
    TArray<float> IntersectedChildTSegmentValues; // 0x48
    TArray<int32_t> IntersectedChildSegment; // 0x58
    TArray<float> IntersectedParentTSegmentValues; // 0x68
    TArray<int32_t> IntersectedParentSegment; // 0x78
    int32_t ClosestPathIndexToA; // 0x88
    int32_t ClosestPathIndexToB; // 0x8c
    float Length; // 0x90
    float Width; // 0x94
    char pad_98[0x8];
    TArray<FPathPointTags> PathTags; // 0xa0
    static UMapPath* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
