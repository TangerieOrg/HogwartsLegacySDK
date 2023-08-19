#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUserInterfaceActionType {
    None = 0,
    Button = 1,
    ToggleButton = 2,
    RadioButton = 3,
    Check = 4,
    CollapsedButton = 5,
    EUserInterfaceActionType_MAX = 6,
};
#pragma pack(pop)
