#pragma once
#include <cstdint>
class UPhoenixCreditEntryWidget;
#pragma pack(push, 1)
struct FAnimatedCreditEntry {
    UPhoenixCreditEntryWidget* EntryWidget; // 0x0
    float EntryStartTime; // 0x8
    float EntryEndTime; // 0xc
}; // Size: 0x10
#pragma pack(pop)
