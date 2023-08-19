#pragma once
#include <cstdint>
#include "UGameInstanceSubsystem.hpp"
#pragma pack(push, 1)
class UReplaySubsystem : public UGameInstanceSubsystem {
public:
    bool bLoadDefaultMapOnStop; // 0x30
    char pad_31[0xf];
    static UReplaySubsystem* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
