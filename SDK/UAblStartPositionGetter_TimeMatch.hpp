#pragma once
#include <cstdint>
#include "UAblStartPositionGetter.hpp"
#pragma pack(push, 1)
class UAblStartPositionGetter_TimeMatch : public UAblStartPositionGetter {
public:
    bool bOnlyTimeMatchIfAnimInstanceAgrees; // 0x28
    bool bSetFixedDirectionForTurnAssist; // 0x29
    char pad_2a[0x6];
    static UAblStartPositionGetter_TimeMatch* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
