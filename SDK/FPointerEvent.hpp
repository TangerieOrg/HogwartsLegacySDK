#pragma once
#include <cstdint>
#include "FInputEvent.hpp"
#pragma pack(push, 1)
struct FPointerEvent : public FInputEvent {
    char pad_18[0x58];
}; // Size: 0x70
#pragma pack(pop)
