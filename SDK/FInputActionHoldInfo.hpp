#pragma once
#include <cstdint>
#include "EUMGInputAction.hpp"
#pragma pack(push, 1)
struct FInputActionHoldInfo {
    EUMGInputAction InputAction; // 0x0
    bool bMustHold; // 0x1
}; // Size: 0x2
#pragma pack(pop)
