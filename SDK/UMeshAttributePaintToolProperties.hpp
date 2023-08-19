#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet {
public:
    TArray<FName> Attributes; // 0x60
    int32_t SelectedAttribute; // 0x70
    char pad_74[0x4];
    FString AttributeName; // 0x78
    static UMeshAttributePaintToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
