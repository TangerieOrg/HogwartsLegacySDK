#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTextBuffer : public UObject {
public:
    char pad_28[0x28];
    static UTextBuffer* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
