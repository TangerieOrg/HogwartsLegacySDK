#pragma once
#include <cstdint>
#include "FTransformMeshesTarget.hpp"
#include "UMultiSelectionTool.hpp"
class UTransformMeshesToolProperties;
#pragma pack(push, 1)
class UTransformMeshesTool : public UMultiSelectionTool {
public:
    char pad_90[0x8];
    UTransformMeshesToolProperties* TransformProps; // 0x98
    char pad_a0[0x10];
    TArray<FTransformMeshesTarget> ActiveGizmos; // 0xb0
    char pad_c0[0x80];
    static UTransformMeshesTool* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
