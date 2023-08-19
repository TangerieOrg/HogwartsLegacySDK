#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UVanishmentQueue : public UObject {
public:
    char pad_28[0x20];
    static UVanishmentQueue* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
