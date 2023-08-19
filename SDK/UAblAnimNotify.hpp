#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAblAnimNotify : public UAnimNotify {
public:
    FName EventName; // 0x38
    static UAblAnimNotify* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
