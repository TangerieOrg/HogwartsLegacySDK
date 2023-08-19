#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UUworldSupport : public UObject {
public:
    char pad_28[0x40];
    static UUworldSupport* StaticClass();
    static UUworldSupport* Get();
}; // Size: 0x68
#pragma pack(pop)
