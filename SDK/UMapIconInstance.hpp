#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMapIconInstance : public UObject {
public:
    char pad_28[0x158];
    static UMapIconInstance* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
