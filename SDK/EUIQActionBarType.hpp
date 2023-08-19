#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIQActionBarType : uint8_t {
    QuickAction_Spells = 0,
    QuickAction_Inventory = 1,
    QuickAction_None = 2,
    QuickAction_MAX = 3,
};
#pragma pack(pop)
