#pragma once
#include <cstdint>
namespace EWandCastType {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LightAttack = 1,
    HeavyAttack = 2,
    MeleeAttack = 3,
    ComboFinisherAttack = 4,
    EWandCastType_MAX = 5,
};
#pragma pack(pop)
}
