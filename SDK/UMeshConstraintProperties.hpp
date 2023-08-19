#pragma once
#include <cstdint>
#include "EGroupBoundaryConstraint.hpp"
#include "EMaterialBoundaryConstraint.hpp"
#include "EMeshBoundaryConstraint.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMeshConstraintProperties : public UInteractiveToolPropertySet {
public:
    bool bPreserveSharpEdges; // 0x60
    EMeshBoundaryConstraint MeshBoundaryConstraint; // 0x61
    EGroupBoundaryConstraint GroupBoundaryConstraint; // 0x62
    EMaterialBoundaryConstraint MaterialBoundaryConstraint; // 0x63
    bool bPreventNormalFlips; // 0x64
    char pad_65[0x3];
    static UMeshConstraintProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
