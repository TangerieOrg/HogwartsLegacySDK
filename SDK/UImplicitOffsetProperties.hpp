#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UImplicitOffsetProperties : public UInteractiveToolPropertySet {
public:
    float Smoothness; // 0x60
    bool bPreserveUVs; // 0x64
    char pad_65[0x3];
    static UImplicitOffsetProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
