#pragma once
#include <cstdint>
#include "FAnimInstanceProxy.hpp"
#pragma pack(push, 1)
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy {
    char pad_770[0xa0];
}; // Size: 0x810
#pragma pack(pop)
