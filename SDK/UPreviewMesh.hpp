#pragma once
#include <cstdint>
#include "UObject.hpp"
class USimpleDynamicMeshComponent;
#pragma pack(push, 1)
class UPreviewMesh : public UObject {
public:
    char pad_28[0x18];
    bool bBuildSpatialDataStructure; // 0x40
    bool bDrawOnTop; // 0x41
    char pad_42[0xe];
    USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x50
    char pad_58[0x88];
    static UPreviewMesh* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
