#pragma once
#include <cstdint>
class UUMGFocusWidget;
#pragma pack(push, 1)
struct FUMGInputListener {
    int32_t UIPriority; // 0x0
    char pad_4[0x4];
    UUMGFocusWidget* UMGFocusWidget; // 0x8
}; // Size: 0x10
#pragma pack(pop)
