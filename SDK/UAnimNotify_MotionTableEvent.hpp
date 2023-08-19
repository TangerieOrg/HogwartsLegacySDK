#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_MotionTableEvent : public UAnimNotify {
public:
    FName Name; // 0x38
    static UAnimNotify_MotionTableEvent* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
