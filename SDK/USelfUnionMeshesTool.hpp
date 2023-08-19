#pragma once
#include <cstdint>
#include "UBaseCreateFromSelectedTool.hpp"
class USelfUnionMeshesToolProperties;
class ULineSetComponent;
#pragma pack(push, 1)
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool {
public:
    USelfUnionMeshesToolProperties* Properties; // 0xf0
    ULineSetComponent* DrawnLineSet; // 0xf8
    char pad_100[0x20];
    static USelfUnionMeshesTool* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
