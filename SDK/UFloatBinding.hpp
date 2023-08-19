#pragma once
#include <cstdint>
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UFloatBinding : public UPropertyBinding {
public:
    static UFloatBinding* StaticClass();
    float GetValue();
}; // Size: 0x60
#pragma pack(pop)
