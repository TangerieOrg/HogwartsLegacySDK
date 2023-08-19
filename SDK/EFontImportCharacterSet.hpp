#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFontImportCharacterSet : uint8_t {
    FontICS_Default = 0,
    FontICS_Ansi = 1,
    FontICS_Symbol = 2,
    FontICS_MAX = 3,
};
#pragma pack(pop)
