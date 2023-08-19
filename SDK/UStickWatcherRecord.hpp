#pragma once
#include <cstdint>
#include "UWatcherRecord.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UStickWatcherRecord : public UWatcherRecord {
public:
    UCurveFloat* StickMagCurve; // 0x58
    static UStickWatcherRecord* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
