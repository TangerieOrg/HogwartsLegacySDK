#pragma once
#include <cstdint>
#include "UTimedButtonWatcherRecord.hpp"
#pragma pack(push, 1)
class UInteractTimedButtonWatcherRecord : public UTimedButtonWatcherRecord {
public:
    static UInteractTimedButtonWatcherRecord* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
