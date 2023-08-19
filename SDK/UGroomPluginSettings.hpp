#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGroomPluginSettings : public UObject {
public:
    float GroomCacheLookAheadBuffer; // 0x28
    char pad_2c[0x4];
    static UGroomPluginSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
