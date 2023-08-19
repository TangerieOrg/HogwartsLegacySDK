#pragma once
#include <cstdint>
#include "EAnimTypeEnum.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FDialogueLineData : public FTableRowBase {
    float PreRoll; // 0x8
    float PostRoll; // 0xc
    float AnimLen; // 0x10
    EAnimTypeEnum Type; // 0x14
    char pad_15[0x3];
    FString Meta; // 0x18
}; // Size: 0x28
#pragma pack(pop)
