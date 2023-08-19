#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIPopupPriority : uint8_t {
    UIPP_Normal = 0,
    UIPP_Important = 1,
    UIPP_Critical = 2,
    UIPP_MAX = 3,
};
#pragma pack(pop)
