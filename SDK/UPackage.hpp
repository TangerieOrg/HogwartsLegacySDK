#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPackage : public UObject {
public:
    char pad_28[0x78];
    static UPackage* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
