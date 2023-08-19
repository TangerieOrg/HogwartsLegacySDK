#pragma once
#include <cstdint>
#include "UStickWatcherRecord.hpp"
#pragma pack(push, 1)
class UStickFlickWatcherRecord : public UStickWatcherRecord {
public:
    float PreFlickRestTime; // 0x60
    float MaxTime; // 0x64
    float MinMagnitude; // 0x68
    char pad_6c[0x4];
    static UStickFlickWatcherRecord* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
