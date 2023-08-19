#pragma once
#include <cstdint>
#include "FInputEvent.hpp"
#pragma pack(push, 1)
struct FMotionEvent : public FInputEvent {
    char pad_18[0x30];
}; // Size: 0x48
#pragma pack(pop)
