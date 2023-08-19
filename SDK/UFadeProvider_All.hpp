#pragma once
#include <cstdint>
#include "UFadeProvider.hpp"
#pragma pack(push, 1)
class UFadeProvider_All : public UFadeProvider {
public:
    char pad_28[0x8];
    static UFadeProvider_All* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
