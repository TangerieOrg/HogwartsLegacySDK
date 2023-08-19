#pragma once
#include <cstdint>
#include "UAblAbilityBaseScratchPad.hpp"
class UObject;
#pragma pack(push, 1)
class UAblAbilityEventScratchPad : public UAblAbilityBaseScratchPad {
public:
    char pad_28[0x20];
    static UAblAbilityEventScratchPad* StaticClass();
    void EventReceived(UObject* Caller);
}; // Size: 0x48
#pragma pack(pop)
