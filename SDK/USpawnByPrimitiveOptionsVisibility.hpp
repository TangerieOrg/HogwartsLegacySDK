#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsVisibility : public USpawnByPrimitiveOptions {
public:
    bool bVisible; // 0x28
    bool bIncludeChildren; // 0x29
    char pad_2a[0x6];
    static USpawnByPrimitiveOptionsVisibility* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
