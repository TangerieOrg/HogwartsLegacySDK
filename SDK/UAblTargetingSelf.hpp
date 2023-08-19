#pragma once
#include <cstdint>
#include "UAblTargetingBase.hpp"
#pragma pack(push, 1)
class UAblTargetingSelf : public UAblTargetingBase {
public:
    static UAblTargetingSelf* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
