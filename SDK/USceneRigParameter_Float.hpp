#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_Float : public USceneRigParameter {
public:
    float Value; // 0x38
    char pad_3c[0x4];
    static USceneRigParameter_Float* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
