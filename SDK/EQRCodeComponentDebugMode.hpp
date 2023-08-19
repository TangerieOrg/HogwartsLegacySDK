#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQRCodeComponentDebugMode : uint8_t {
    None = 0,
    ShowQRCode = 1,
    EQRCodeComponentDebugMode_MAX = 2,
};
#pragma pack(pop)
