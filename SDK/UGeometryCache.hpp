#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMaterialInterface;
class UGeometryCacheTrack;
#pragma pack(push, 1)
class UGeometryCache : public UObject {
public:
    char pad_28[0x8];
    TArray<UMaterialInterface*> Materials; // 0x30
    TArray<UGeometryCacheTrack*> Tracks; // 0x40
    char pad_50[0x10];
    int32_t StartFrame; // 0x60
    int32_t EndFrame; // 0x64
    uint64_t Hash; // 0x68
    static UGeometryCache* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
