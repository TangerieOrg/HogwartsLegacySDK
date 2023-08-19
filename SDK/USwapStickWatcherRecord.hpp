#pragma once
#include <cstdint>
#include "UStickWatcherRecord.hpp"
#pragma pack(push, 1)
class USwapStickWatcherRecord : public UStickWatcherRecord {
public:
    FName SwapStickBaseName; // 0x60
    static USwapStickWatcherRecord* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
