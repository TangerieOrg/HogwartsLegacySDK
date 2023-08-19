#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_Bool : public USceneRigParameter {
public:
    bool Value; // 0x38
    char pad_39[0x7];
    static USceneRigParameter_Bool* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
