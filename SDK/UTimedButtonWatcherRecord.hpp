#pragma once
#include <cstdint>
#include "UButtonWatcherRecord.hpp"
#pragma pack(push, 1)
class UTimedButtonWatcherRecord : public UButtonWatcherRecord {
public:
    float ChargeTime; // 0x58
    char pad_5c[0x4];
    static UTimedButtonWatcherRecord* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
