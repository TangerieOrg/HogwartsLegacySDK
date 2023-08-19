#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECommandForType : uint8_t {
    Speaker = 0,
    Listener = 1,
    Both = 2,
    ECommandForType_MAX = 3,
};
#pragma pack(pop)
