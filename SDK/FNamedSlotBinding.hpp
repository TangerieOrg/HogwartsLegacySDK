#pragma once
#include <cstdint>
class UWidget;
#pragma pack(push, 1)
struct FNamedSlotBinding {
    FName Name; // 0x0
    UWidget* Content; // 0x8
}; // Size: 0x10
#pragma pack(pop)
