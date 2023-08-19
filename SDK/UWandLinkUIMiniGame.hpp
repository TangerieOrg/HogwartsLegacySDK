#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UWandLinkUIMiniGame : public UObject {
public:
    char pad_28[0x30];
    static UWandLinkUIMiniGame* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
