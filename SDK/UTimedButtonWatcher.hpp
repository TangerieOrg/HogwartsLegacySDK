#pragma once
#include <cstdint>
#include "UButtonWatcher.hpp"
#pragma pack(push, 1)
class UTimedButtonWatcher : public UButtonWatcher {
public:
    char pad_158[0x8];
    static UTimedButtonWatcher* StaticClass();
    void SetChargeTime(float InChargeTime);
    float RestoreChargeTime();
    void ActionStop();
}; // Size: 0x160
#pragma pack(pop)
