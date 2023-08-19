#pragma once
#include <cstdint>
#include "UFunction.hpp"
#pragma pack(push, 1)
class UDelegateFunction : public UFunction {
public:
    static UDelegateFunction* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
