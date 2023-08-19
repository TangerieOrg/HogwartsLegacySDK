#pragma once
#include <cstdint>
#include "URemeshMeshTool.hpp"
#pragma pack(push, 1)
class UProjectToTargetTool : public URemeshMeshTool {
public:
    char pad_e8[0x10];
    static UProjectToTargetTool* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
