#pragma once
#include <cstdint>
#include "EUVProjectionMethod.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UUVProjectionToolProperties : public UInteractiveToolPropertySet {
public:
    EUVProjectionMethod UVProjectionMethod; // 0x60
    char pad_61[0x3];
    FVector ProjectionPrimitiveScale; // 0x64
    float CylinderProjectToTopOrBottomAngleThreshold; // 0x70
    FVector2D UVScale; // 0x74
    FVector2D UVOffset; // 0x7c
    bool bWorldSpaceUVScale; // 0x84
    char pad_85[0x3];
    static UUVProjectionToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
