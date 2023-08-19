#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablWandCastComboResetTask : public UAblAbilityTask {
public:
    bool bResetWandCastState; // 0x70
    char pad_71[0x7];
    static UablWandCastComboResetTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
