#pragma once
#include <cstdint>
#include "UStruct.hpp"
class UObject;
#pragma pack(push, 1)
class UClass : public UStruct {
public:
    char pad_b0[0x68];
    UObject* ClassDefaultObject; // 0x118
    char pad_120[0x110];
    static UClass* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
