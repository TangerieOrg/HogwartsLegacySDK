#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UPolygonSelectionMechanic;
class USingleClickInputBehavior;
#pragma pack(push, 1)
class UMeshBoundaryToolBase : public USingleSelectionTool {
public:
    char pad_88[0xb0];
    UPolygonSelectionMechanic* SelectionMechanic; // 0x138
    USingleClickInputBehavior* LoopSelectClickBehavior; // 0x140
    char pad_148[0x8];
    static UMeshBoundaryToolBase* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
