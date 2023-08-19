#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UCombineMeshesToolProperties;
class UOnAcceptHandleSourcesProperties;
#pragma pack(push, 1)
class UCombineMeshesTool : public UMultiSelectionTool {
public:
    UCombineMeshesToolProperties* BasicProperties; // 0x90
    UOnAcceptHandleSourcesProperties* HandleSourceProperties; // 0x98
    char pad_a0[0x18];
    static UCombineMeshesTool* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
