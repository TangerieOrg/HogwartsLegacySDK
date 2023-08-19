#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULoadEntry : public UObject {
public:
    static ULoadEntry* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
