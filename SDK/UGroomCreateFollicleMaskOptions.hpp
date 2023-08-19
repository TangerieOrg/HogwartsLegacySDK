#pragma once
#include <cstdint>
#include "FFollicleMaskOptions.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGroomCreateFollicleMaskOptions : public UObject {
public:
    int32_t Resolution; // 0x28
    int32_t RootRadius; // 0x2c
    TArray<FFollicleMaskOptions> Grooms; // 0x30
    static UGroomCreateFollicleMaskOptions* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
