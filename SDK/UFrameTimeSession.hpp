#pragma once
#include <cstdint>
#include "USessionTracker.hpp"
#pragma pack(push, 1)
class UFrameTimeSession : public USessionTracker {
public:
    static UFrameTimeSession* StaticClass();
    void Tick();
}; // Size: 0x28
#pragma pack(pop)
