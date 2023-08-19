#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#include "FTextBlockStyle.hpp"
#pragma pack(push, 1)
struct FRichTextStyleRow : public FTableRowBase {
    FTextBlockStyle TextStyle; // 0x8
}; // Size: 0x278
#pragma pack(pop)
