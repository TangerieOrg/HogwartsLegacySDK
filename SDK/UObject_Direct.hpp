#pragma once
#include <cstdint>
#include "UObjectProvider.hpp"
#pragma pack(push, 1)
class UObject_Direct : public UObjectProvider {
public:
    char pad_28[0x8];
    static UObject_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
