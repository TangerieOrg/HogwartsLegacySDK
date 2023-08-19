#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_RiderAbleEvent : public UAnimNotify {
public:
    FName EventName; // 0x38
    static UAnimNotify_RiderAbleEvent* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
