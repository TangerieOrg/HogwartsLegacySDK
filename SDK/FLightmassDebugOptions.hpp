#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightmassDebugOptions {
    uint8_t bDebugMode : 1; // 0x0
    uint8_t bStatsEnabled : 1; // 0x0
    uint8_t bGatherBSPSurfacesAcrossComponents : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    float CoplanarTolerance; // 0x4
    uint8_t bUseImmediateImport : 1; // 0x8
    uint8_t bImmediateProcessMappings : 1; // 0x8
    uint8_t bSortMappings : 1; // 0x8
    uint8_t bDumpBinaryFiles : 1; // 0x8
    uint8_t bDebugMaterials : 1; // 0x8
    uint8_t bPadMappings : 1; // 0x8
    uint8_t bDebugPaddings : 1; // 0x8
    uint8_t bOnlyCalcDebugTexelMappings : 1; // 0x8
    uint8_t bUseRandomColors : 1; // 0x9
    uint8_t bColorBordersGreen : 1; // 0x9
    uint8_t bColorByExecutionTime : 1; // 0x9
    uint8_t pad_bitfield_9_3 : 5;
    char pad_a[0x2];
    float ExecutionTimeDivisor; // 0xc
}; // Size: 0x10
#pragma pack(pop)
