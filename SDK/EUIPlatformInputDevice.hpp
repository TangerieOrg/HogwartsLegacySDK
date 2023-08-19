#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIPlatformInputDevice : uint8_t {
    UIPID_PS4 = 0,
    UIPID_XBOne = 1,
    UIPID_PS5 = 2,
    UIPID_XSX = 3,
    UIPID_Switch = 4,
    UIPID_PC = 5,
    UIPID_MAX = 6,
};
#pragma pack(pop)
