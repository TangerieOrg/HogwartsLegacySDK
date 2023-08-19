#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UHandleLinkInfo : public UObject {
public:
    char pad_28[0x70];
    static UHandleLinkInfo* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
