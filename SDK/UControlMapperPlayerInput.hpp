#pragma once
#include <cstdint>
#include "UPlayerInput.hpp"
#pragma pack(push, 1)
class UControlMapperPlayerInput : public UPlayerInput {
public:
    char pad_3a8[0x10];
    static UControlMapperPlayerInput* StaticClass();
}; // Size: 0x3b8
#pragma pack(pop)
