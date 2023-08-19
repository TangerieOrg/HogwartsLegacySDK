#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
#pragma pack(push, 1)
class UStringProvider : public UBaseProvider {
public:
    static UStringProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
