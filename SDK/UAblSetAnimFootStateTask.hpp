#pragma once
#include <cstdint>
#include "EBasicMobilityFootState.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetAnimFootStateTask : public UAblAbilityTask {
public:
    EBasicMobilityFootState FootState; // 0x70
    char pad_71[0x7];
    static UAblSetAnimFootStateTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
