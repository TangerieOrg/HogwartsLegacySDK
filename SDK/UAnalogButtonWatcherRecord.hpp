#pragma once
#include <cstdint>
#include "UButtonWatcherRecord.hpp"
#pragma pack(push, 1)
class UAnalogButtonWatcherRecord : public UButtonWatcherRecord {
public:
    float PressedValue; // 0x58
    float ReleasedValue; // 0x5c
    static UAnalogButtonWatcherRecord* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
