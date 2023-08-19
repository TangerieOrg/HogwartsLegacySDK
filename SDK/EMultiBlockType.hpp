#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiBlockType {
    None = 0,
    ButtonRow = 1,
    EditableText = 2,
    Heading = 3,
    MenuEntry = 4,
    Separator = 5,
    ToolBarButton = 6,
    ToolBarComboButton = 7,
    Widget = 8,
    EMultiBlockType_MAX = 9,
};
#pragma pack(pop)
