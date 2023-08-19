#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_Int : public USceneRigParameter {
public:
    int32_t Value; // 0x38
    char pad_3c[0x4];
    static USceneRigParameter_Int* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
