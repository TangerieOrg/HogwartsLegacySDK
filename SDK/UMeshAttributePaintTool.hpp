#pragma once
#include <cstdint>
#include "UDynamicMeshBrushTool.hpp"
class UMeshAttributePaintToolProperties;
#pragma pack(push, 1)
class UMeshAttributePaintTool : public UDynamicMeshBrushTool {
public:
    UMeshAttributePaintToolProperties* AttribProps; // 0x1f8
    char pad_200[0x410];
    static UMeshAttributePaintTool* StaticClass();
}; // Size: 0x610
#pragma pack(pop)
