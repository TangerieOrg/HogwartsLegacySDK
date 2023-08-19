#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USetParameterValue : public UObject {
public:
    char pad_28[0x8];
    static USetParameterValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
