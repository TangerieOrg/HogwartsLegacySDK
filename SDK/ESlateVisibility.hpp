#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESlateVisibility : uint8_t {
    Visible = 0,
    Collapsed = 1,
    Hidden = 2,
    HitTestInvisible = 3,
    SelfHitTestInvisible = 4,
    ESlateVisibility_MAX = 5,
};
#pragma pack(pop)
