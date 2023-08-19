#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UBakeTransformToolProperties;
#pragma pack(push, 1)
class UBakeTransformTool : public UMultiSelectionTool {
public:
    UBakeTransformToolProperties* BasicProperties; // 0x90
    char pad_98[0x20];
    static UBakeTransformTool* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
