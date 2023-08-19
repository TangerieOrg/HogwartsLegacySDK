#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIFactsheetMode : uint8_t {
    UI_Compendium = 0,
    UI_Book = 1,
    UI_Person = 2,
    UI_MAX = 3,
};
#pragma pack(pop)
