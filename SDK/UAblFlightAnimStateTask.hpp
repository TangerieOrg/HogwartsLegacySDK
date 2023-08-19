#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblFlightAnimStateTask : public UAblAbilityTask {
public:
    bool bIsGliding; // 0x70
    char pad_71[0x7];
    static UAblFlightAnimStateTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
