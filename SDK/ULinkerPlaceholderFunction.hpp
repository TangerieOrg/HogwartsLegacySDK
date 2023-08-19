#pragma once
#include <cstdint>
#include "UFunction.hpp"
#pragma pack(push, 1)
class ULinkerPlaceholderFunction : public UFunction {
public:
    char pad_e0[0x1b8];
    static ULinkerPlaceholderFunction* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
