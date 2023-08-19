#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet {
public:
    bool bEnableFilter; // 0x60
    char pad_61[0x3];
    FVector FilterDirection; // 0x64
    float FilterWidth; // 0x70
    char pad_74[0x4];
    static UDisplaceMeshDirectionalFilterProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
