#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
#pragma pack(push, 1)
class UViewportStatsSubsystem : public UWorldSubsystem {
public:
    char pad_30[0x20];
    static UViewportStatsSubsystem* StaticClass();
    void RemoveDisplayDelegate(int32_t IndexToRemove);
    void AddTimedDisplay();
    void AddDisplayDelegate();
}; // Size: 0x50
#pragma pack(pop)
