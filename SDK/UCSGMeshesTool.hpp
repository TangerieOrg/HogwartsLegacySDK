#pragma once
#include <cstdint>
#include "UBaseCreateFromSelectedTool.hpp"
class UCSGMeshesToolProperties;
class ULineSetComponent;
#pragma pack(push, 1)
class UCSGMeshesTool : public UBaseCreateFromSelectedTool {
public:
    UCSGMeshesToolProperties* CSGProperties; // 0xf0
    char pad_f8[0x10];
    ULineSetComponent* DrawnLineSet; // 0x108
    char pad_110[0x10];
    static UCSGMeshesTool* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
