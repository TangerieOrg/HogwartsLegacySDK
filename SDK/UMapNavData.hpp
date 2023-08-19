#pragma once
#include <cstdint>
#include "FIntPoint.hpp"
#include "FMapBoundingBox.hpp"
#include "FMapTriangle.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMapNavData : public UObject {
public:
    FString LevelName; // 0x28
    TArray<FString> SubLevelNames; // 0x38
    int32_t NumNavmeshes; // 0x48
    char pad_4c[0x4];
    TArray<int32_t> Offsets; // 0x50
    TArray<FVector> Vertexes; // 0x60
    TArray<int32_t> TriangleIndexes; // 0x70
    TArray<FIntPoint> NavLayers; // 0x80
    TArray<FMapTriangle> Triangles; // 0x90
    TArray<FIntPoint> TriangleCentroid; // 0xa0
    FMapBoundingBox Bounds; // 0xb0
    static UMapNavData* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
