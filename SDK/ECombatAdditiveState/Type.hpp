#pragma once
#include <cstdint>
namespace ECombatAdditiveState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Inactive = 1,
    Active = 2,
    ECombatAdditiveState_MAX = 3,
};
#pragma pack(pop)
}
