#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FPrimitiveComponentInstanceData.hpp"
#include "FStaticMeshVertexColorLODData.hpp"
#include "FStreamingTextureBuildInfo.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData {
    UStaticMesh* StaticMesh; // 0x100
    TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
    TArray<FGuid> CachedStaticLighting; // 0x118
    TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
    char pad_138[0x8];
}; // Size: 0x140
#pragma pack(pop)
