#pragma once
#include <cstdint>
#include "FInputEvent.hpp"
#pragma pack(push, 1)
struct FNavigationEvent : public FInputEvent {
    char pad_18[0x8];
}; // Size: 0x20
#pragma pack(pop)
