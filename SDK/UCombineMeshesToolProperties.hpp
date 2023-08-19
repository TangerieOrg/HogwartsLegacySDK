#pragma once
#include <cstdint>
#include "ECombineTargetType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet {
public:
    bool bIsDuplicateMode; // 0x60
    char pad_61[0x3];
    ECombineTargetType WriteOutputTo; // 0x64
    FString OutputName; // 0x68
    FString OutputAsset; // 0x78
    static UCombineMeshesToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
