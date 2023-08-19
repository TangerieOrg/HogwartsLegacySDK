#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFocusTriggerType : uint8_t {
    FOCUSTRIGGER_TYPE_OPENWORLD = 0,
    FOCUSTRIGGER_TYPE_NPC = 1,
    FOCUSTRIGGER_TYPE_PLAYER = 2,
    FOCUSTRIGGER_TYPE_WORLDEVENT = 3,
    FOCUSTRIGGER_TYPE_COUNT = 4,
    FOCUSTRIGGER_TYPE_MAX = 5,
};
#pragma pack(pop)
