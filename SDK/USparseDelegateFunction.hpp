#pragma once
#include <cstdint>
#include "UDelegateFunction.hpp"
#pragma pack(push, 1)
class USparseDelegateFunction : public UDelegateFunction {
public:
    char pad_e0[0x10];
    static USparseDelegateFunction* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
