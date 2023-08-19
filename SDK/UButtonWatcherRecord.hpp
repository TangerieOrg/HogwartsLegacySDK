#pragma once
#include <cstdint>
#include "UWatcherRecord.hpp"
#pragma pack(push, 1)
class UButtonWatcherRecord : public UWatcherRecord {
public:
    static UButtonWatcherRecord* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
