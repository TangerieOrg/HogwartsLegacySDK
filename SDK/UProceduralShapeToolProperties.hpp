#pragma once
#include <cstdint>
#include "EMakeMeshPivotLocation.hpp"
#include "EMakeMeshPlacementType.hpp"
#include "EMakeMeshPolygroupMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet {
public:
    bool bInstanceIfPossible; // 0x60
    EMakeMeshPolygroupMode PolygroupMode; // 0x61
    EMakeMeshPlacementType PlaceMode; // 0x62
    bool bSnapToGrid; // 0x63
    EMakeMeshPivotLocation PivotLocation; // 0x64
    char pad_65[0x3];
    float Rotation; // 0x68
    bool bAlignShapeToPlacementSurface; // 0x6c
    char pad_6d[0x3];
    static UProceduralShapeToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
