#pragma once
#include <cstdint>
#include "UIpNetDriver.hpp"
#pragma pack(push, 1)
class UNetDriverEOS : public UIpNetDriver {
public:
    bool bIsPassthrough; // 0x7d0
    bool bIsUsingP2PSockets; // 0x7d1
    char pad_7d2[0x6];
    static UNetDriverEOS* StaticClass();
}; // Size: 0x7d8
#pragma pack(pop)
