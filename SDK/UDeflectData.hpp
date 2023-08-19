#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDeflectData : public UObject {
public:
    char pad_28[0x188];
    static UDeflectData* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
