#pragma once
#include <cstdint>
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class USafeZone : public UContentWidget {
public:
    bool PadLeft; // 0x120
    bool PadRight; // 0x121
    bool PadTop; // 0x122
    bool PadBottom; // 0x123
    char pad_124[0x14];
    static USafeZone* StaticClass();
    void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
}; // Size: 0x138
#pragma pack(pop)
