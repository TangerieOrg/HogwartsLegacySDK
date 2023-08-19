#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMeshAnalysisProperties : public UInteractiveToolPropertySet {
public:
    FString SurfaceArea; // 0x60
    FString Volume; // 0x70
    static UMeshAnalysisProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
