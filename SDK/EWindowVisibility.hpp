#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindowVisibility : uint8_t {
    Visible = 0,
    SelfHitTestInvisible = 1,
    EWindowVisibility_MAX = 2,
};
#pragma pack(pop)
