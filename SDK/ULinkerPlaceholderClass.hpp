#pragma once
#include <cstdint>
#include "UClass.hpp"
#pragma pack(push, 1)
class ULinkerPlaceholderClass : public UClass {
public:
    char pad_230[0x1b8];
    static ULinkerPlaceholderClass* StaticClass();
}; // Size: 0x3e8
#pragma pack(pop)
