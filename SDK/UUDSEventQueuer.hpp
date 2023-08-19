#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UUDSEventQueuer : public UObject {
public:
    char pad_28[0x190];
    static UUDSEventQueuer* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)
