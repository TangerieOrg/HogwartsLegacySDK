#pragma once
#include <cstdint>
#include "UCommandlet.hpp"
#pragma pack(push, 1)
class UPluginCommandlet : public UCommandlet {
public:
    char pad_80[0x20];
    static UPluginCommandlet* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
