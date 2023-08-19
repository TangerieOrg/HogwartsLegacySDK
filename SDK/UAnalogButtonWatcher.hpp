#pragma once
#include <cstdint>
#include "UButtonWatcher.hpp"
#pragma pack(push, 1)
class UAnalogButtonWatcher : public UButtonWatcher {
public:
    char pad_158[0x8];
    static UAnalogButtonWatcher* StaticClass();
    void AnalogValue(float AxisVal);
}; // Size: 0x160
#pragma pack(pop)
