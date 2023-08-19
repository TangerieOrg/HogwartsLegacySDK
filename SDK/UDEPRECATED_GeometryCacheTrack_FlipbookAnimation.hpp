#pragma once
#include <cstdint>
#include "UGeometryCacheTrack.hpp"
struct FGeometryCacheMeshData;
#pragma pack(push, 1)
class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {
public:
    uint32_t NumMeshSamples; // 0x58
    char pad_5c[0x24];
    static UDEPRECATED_GeometryCacheTrack_FlipbookAnimation* StaticClass();
    void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);
}; // Size: 0x80
#pragma pack(pop)
