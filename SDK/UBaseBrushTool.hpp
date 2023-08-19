#pragma once
#include <cstdint>
#include "FBrushStampData.hpp"
#include "UMeshSurfacePointTool.hpp"
class UBrushBaseProperties;
class UBrushStampIndicator;
#pragma pack(push, 1)
class UBaseBrushTool : public UMeshSurfacePointTool {
public:
    UBrushBaseProperties* BrushProperties; // 0xc0
    bool bInBrushStroke; // 0xc8
    char pad_c9[0x3];
    float WorldToLocalScale; // 0xcc
    FBrushStampData LastBrushStamp; // 0xd0
    char pad_178[0x38];
    UBrushStampIndicator* BrushStampIndicator; // 0x1b0
    static UBaseBrushTool* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)
