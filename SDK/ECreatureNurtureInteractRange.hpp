#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureNurtureInteractRange : uint8_t {
    Close = 0,
    Normal = 1,
    Far = 2,
    ECreatureNurtureInteractRange_MAX = 3,
};
#pragma pack(pop)
