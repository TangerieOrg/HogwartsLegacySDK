#pragma once
#include <cstdint>
#include "UIpConnection.hpp"
#pragma pack(push, 1)
class UNetConnectionEOS : public UIpConnection {
public:
    char pad_1c48[0x8];
    static UNetConnectionEOS* StaticClass();
}; // Size: 0x1c50
#pragma pack(pop)
