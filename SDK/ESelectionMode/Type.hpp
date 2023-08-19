#pragma once
#include <cstdint>
namespace ESelectionMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Single = 1,
    SingleToggle = 2,
    Multi = 3,
    ESelectionMode_MAX = 4,
};
#pragma pack(pop)
}
