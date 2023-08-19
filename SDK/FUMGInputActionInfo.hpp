#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#pragma pack(push, 1)
struct FUMGInputActionInfo {
    EUMGInputAction InputAction; // 0x0
    EInputEvent InputEvent; // 0x1
}; // Size: 0x2
#pragma pack(pop)
