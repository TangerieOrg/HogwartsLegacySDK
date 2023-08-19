#pragma once
#include <cstdint>
#include "FAnimInstanceProxy.hpp"
#pragma pack(push, 1)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy {
    char pad_770[0x150];
}; // Size: 0x8c0
#pragma pack(pop)
