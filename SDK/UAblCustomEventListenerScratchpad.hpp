#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UAblCustomEventListenerScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    static UAblCustomEventListenerScratchpad* StaticClass();
    void OnCustomEvent(UAblAbilityContext* Context, UAblAbilityContext* CallerContext, FName EventName);
}; // Size: 0x30
#pragma pack(pop)
