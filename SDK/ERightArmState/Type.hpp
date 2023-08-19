#pragma once
#include <cstdint>
namespace ERightArmState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    EquipItem = 1,
    UnEquipItem = 2,
    HoldItem = 3,
    PlayExecuteMotion = 4,
    PlayHandOnlyMotion = 5,
    AllowMotionTakeover = 6,
    StopMotionOnly = 7,
    StopMotionAndHideItem = 8,
    HideItem = 9,
    TargetSighted = 10,
    PlayAlertedMotion = 11,
    PlayHeavyAniticipationMotion = 12,
    Optional_PlayHandOnlyMotion = 13,
    StartLumos = 14,
    Channeling = 15,
    Transfiguration = 16,
    WandCastFailed = 17,
    ERightArmState_MAX = 18,
};
#pragma pack(pop)
}
