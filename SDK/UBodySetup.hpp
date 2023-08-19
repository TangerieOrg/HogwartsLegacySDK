#pragma once
#include <cstdint>
#include "FBodyInstance.hpp"
#include "FKAggregateGeom.hpp"
#include "FVector.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "UBodySetupCore.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
class UBodySetup : public UBodySetupCore {
public:
    FKAggregateGeom AggGeom; // 0x38
    uint8_t bAlwaysFullAnimWeight : 1; // 0x90
    uint8_t bConsiderForBounds : 1; // 0x90
    uint8_t bMeshCollideAll : 1; // 0x90
    uint8_t bDoubleSidedGeometry : 1; // 0x90
    uint8_t bGenerateNonMirroredCollision : 1; // 0x90
    uint8_t bSharedCookedData : 1; // 0x90
    uint8_t bGenerateMirroredCollision : 1; // 0x90
    uint8_t bSupportUVsAndFaceRemap : 1; // 0x90
    char pad_91[0x7];
    UPhysicalMaterial* PhysMaterial; // 0x98
    FWalkableSlopeOverride WalkableSlopeOverride; // 0xa0
    char pad_b0[0x78];
    FBodyInstance DefaultInstance; // 0x128
    char pad_280[0x8];
    FVector BuildScale3D; // 0x288
    char pad_294[0xc];
    static UBodySetup* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
