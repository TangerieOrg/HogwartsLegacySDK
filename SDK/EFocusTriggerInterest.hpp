#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFocusTriggerInterest {
    FOCUSTRIGGER_INTEREST_LOOK = 0,
    FOCUSTRIGGER_INTEREST_ACTION = 1,
    FOCUSTRIGGER_INTEREST_COUNT = 2,
    FOCUSTRIGGER_INTEREST_MAX = 3,
};
#pragma pack(pop)
