#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URPGSettings : public UObject {
public:
    char pad_28[0x50];
    static URPGSettings* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
