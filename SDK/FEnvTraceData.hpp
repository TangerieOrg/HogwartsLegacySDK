#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "EEnvQueryTrace\Type.hpp"
#include "EEnvTraceShape\Type.hpp"
#include "ETraceTypeQuery.hpp"
class UClass;
#pragma pack(push, 1)
struct FEnvTraceData {
    int32_t VersionNum; // 0x0
    char pad_4[0x4];
    UClass* NavigationFilter; // 0x8
    float ProjectDown; // 0x10
    float ProjectUp; // 0x14
    float ExtentX; // 0x18
    float ExtentY; // 0x1c
    float ExtentZ; // 0x20
    float PostProjectionVerticalOffset; // 0x24
    ETraceTypeQuery TraceChannel; // 0x28
    ECollisionChannel SerializedChannel; // 0x29
    EEnvTraceShape::Type TraceShape; // 0x2a
    EEnvQueryTrace::Type TraceMode; // 0x2b
    uint8_t bTraceComplex : 1; // 0x2c
    uint8_t bOnlyBlockingHits : 1; // 0x2c
    uint8_t bCanTraceOnNavMesh : 1; // 0x2c
    uint8_t bCanTraceOnGeometry : 1; // 0x2c
    uint8_t bCanDisableTrace : 1; // 0x2c
    uint8_t bCanProjectDown : 1; // 0x2c
    uint8_t pad_bitfield_2c_6 : 2;
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
