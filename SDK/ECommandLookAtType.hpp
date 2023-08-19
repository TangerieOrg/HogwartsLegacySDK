#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECommandLookAtType : uint8_t {
    Speaker = 0,
    Listener = 1,
    ECommandLookAtType_MAX = 2,
};
#pragma pack(pop)
