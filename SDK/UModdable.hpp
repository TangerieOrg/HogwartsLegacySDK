#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UModdable : public UInterface {
public:
    static UModdable* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
