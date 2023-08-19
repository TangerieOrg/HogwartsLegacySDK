#pragma once
#include <cstdint>
#include "UFadeProvider.hpp"
#pragma pack(push, 1)
class UFadeProvider_UIOnly : public UFadeProvider {
public:
    static UFadeProvider_UIOnly* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
