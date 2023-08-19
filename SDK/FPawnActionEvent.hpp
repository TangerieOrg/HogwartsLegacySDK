#pragma once
#include <cstdint>
class UPawnAction;
#pragma pack(push, 1)
struct FPawnActionEvent {
    UPawnAction* Action; // 0x0
    char pad_8[0x10];
}; // Size: 0x18
#pragma pack(pop)
