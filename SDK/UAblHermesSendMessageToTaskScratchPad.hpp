#pragma once
#include <cstdint>
#include "FHermesSendMessageToTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblHermesSendMessageToTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<FHermesSendMessageToTaskEntry> InProgressMessage; // 0x28
    static UAblHermesSendMessageToTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
