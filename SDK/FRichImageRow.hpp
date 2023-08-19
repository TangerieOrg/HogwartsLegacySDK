#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FRichImageRow : public FTableRowBase {
    FSlateBrush Brush; // 0x8
}; // Size: 0x90
#pragma pack(pop)
