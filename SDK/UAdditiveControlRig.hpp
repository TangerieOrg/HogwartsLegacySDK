#pragma once
#include <cstdint>
#include "UControlRig.hpp"
#pragma pack(push, 1)
class UAdditiveControlRig : public UControlRig {
public:
    char pad_650[0x10];
    static UAdditiveControlRig* StaticClass();
}; // Size: 0x660
#pragma pack(pop)
