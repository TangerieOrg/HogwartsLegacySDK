#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
#pragma pack(push, 1)
class UMeshSurfacePointTool : public USingleSelectionTool {
public:
    char pad_88[0x38];
    static UMeshSurfacePointTool* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
