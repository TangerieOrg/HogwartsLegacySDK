#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
#pragma pack(push, 1)
class UWeldMeshEdgesTool : public USingleSelectionTool {
public:
    float Tolerance; // 0x88
    bool bOnlyUnique; // 0x8c
    char pad_8d[0x273];
    static UWeldMeshEdgesTool* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
