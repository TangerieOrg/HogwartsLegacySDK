#pragma once
#include <cstdint>
#include "UBaseCreateFromSelectedTool.hpp"
class UVoxelProperties;
#pragma pack(push, 1)
class UBaseVoxelTool : public UBaseCreateFromSelectedTool {
public:
    UVoxelProperties* VoxProperties; // 0xf0
    char pad_f8[0x10];
    static UBaseVoxelTool* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
