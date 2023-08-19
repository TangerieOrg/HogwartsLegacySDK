#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMemoryUsageManager : public UObject {
public:
    char pad_28[0x40];
    static UMemoryUsageManager* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
