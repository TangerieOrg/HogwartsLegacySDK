#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FEditorToolIconInfo : public FTableRowBase {
    char pad_8[0x50];
    FString Description; // 0x58
}; // Size: 0x68
#pragma pack(pop)
