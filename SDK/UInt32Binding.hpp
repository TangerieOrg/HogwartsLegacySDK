#pragma once
#include <cstdint>
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UInt32Binding : public UPropertyBinding {
public:
    static UInt32Binding* StaticClass();
    int32_t GetValue();
}; // Size: 0x60
#pragma pack(pop)
