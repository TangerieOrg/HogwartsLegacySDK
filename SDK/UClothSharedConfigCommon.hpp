#pragma once
#include <cstdint>
#include "UClothConfigCommon.hpp"
#pragma pack(push, 1)
class UClothSharedConfigCommon : public UClothConfigCommon {
public:
    static UClothSharedConfigCommon* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
