#pragma once
#include <cstdint>
#include "UClass.hpp"
#pragma pack(push, 1)
class UDynamicClass : public UClass {
public:
    char pad_230[0x80];
    static UDynamicClass* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
