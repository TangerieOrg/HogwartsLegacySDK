#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInteractiveAction : uint8_t {
    None = 0,
    Interact = 1,
    Auto = 2,
    Lock = 3,
    Unlock = 4,
    Freeze = 5,
    Thaw = 6,
    Wet = 7,
    Dry = 8,
    StartFire = 9,
    ExtinguishFire = 10,
    IncreaseScale = 11,
    DecreaseScale = 12,
    IncreaseScaleRestore = 13,
    DecreaseScaleRestore = 14,
    Highlight = 15,
    Unhighlight = 16,
    Invisible = 17,
    Visible = 18,
    Immobilized = 19,
    Mobilized = 20,
    Damage = 21,
    Destroy = 22,
    Cut = 23,
    Repair = 24,
    Stun = 25,
    Grown = 26,
    EInteractiveAction_MAX = 27,
};
#pragma pack(pop)
