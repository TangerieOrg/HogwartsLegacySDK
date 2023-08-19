#pragma once
#include <cstdint>
namespace ELeftArmState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    EquipItem = 1,
    HoldItem = 2,
    PlayExecuteMotion = 3,
    PlayHandOnlyMotion = 4,
    AllowMotionTakeover = 5,
    StopMotionOnly = 6,
    StopMotionAndHideItem = 7,
    HideItem = 8,
    ELeftArmState_MAX = 9,
};
#pragma pack(pop)
}
