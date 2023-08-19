#pragma once
#include <cstdint>
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UBoolBinding : public UPropertyBinding {
public:
    static UBoolBinding* StaticClass();
    bool GetValue();
}; // Size: 0x60
#pragma pack(pop)
