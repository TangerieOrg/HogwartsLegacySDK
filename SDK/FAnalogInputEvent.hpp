#pragma once
#include <cstdint>
#include "FKeyEvent.hpp"
#pragma pack(push, 1)
struct FAnalogInputEvent : public FKeyEvent {
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
