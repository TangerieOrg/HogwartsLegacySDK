#pragma once
#include <cstdint>
#include "FInputEvent.hpp"
#pragma pack(push, 1)
struct FKeyEvent : public FInputEvent {
    char pad_18[0x20];
}; // Size: 0x38
#pragma pack(pop)
