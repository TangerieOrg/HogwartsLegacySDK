#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UTransformInputsToolProperties : public UInteractiveToolPropertySet {
public:
    bool bShowTransformUI; // 0x60
    bool bSnapToWorldGrid; // 0x61
    char pad_62[0x6];
    static UTransformInputsToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
