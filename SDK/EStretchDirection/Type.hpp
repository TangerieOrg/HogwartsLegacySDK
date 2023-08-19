#pragma once
#include <cstdint>
namespace EStretchDirection {
#pragma pack(push, 1)
enum Type : uint8_t {
    Both = 0,
    DownOnly = 1,
    UpOnly = 2,
    EStretchDirection_MAX = 3,
};
#pragma pack(pop)
}
