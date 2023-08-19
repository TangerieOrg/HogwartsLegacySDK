#pragma once
#include <cstdint>
#include "FSlateMeshVertex.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class USlateVectorArtData : public UObject {
public:
    TArray<FSlateMeshVertex> VertexData; // 0x28
    TArray<uint32_t> IndexData; // 0x38
    UMaterialInterface* Material; // 0x48
    FVector2D ExtentMin; // 0x50
    FVector2D ExtentMax; // 0x58
    static USlateVectorArtData* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
