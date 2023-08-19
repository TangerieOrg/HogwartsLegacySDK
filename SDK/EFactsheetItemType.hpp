#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFactsheetItemType : uint8_t {
    FACTSHEET_ITEM_TYPE_UNKNOWN = 0,
    FACTSHEET_ITEM_TYPE_PERSON = 1,
    FACTSHEET_ITEM_TYPE_MAX = 2,
};
#pragma pack(pop)
