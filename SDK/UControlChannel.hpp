#pragma once
#include <cstdint>
#include "UChannel.hpp"
#pragma pack(push, 1)
class UControlChannel : public UChannel {
public:
    char pad_68[0x18];
    static UControlChannel* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
