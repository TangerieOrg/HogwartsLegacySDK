#pragma once
#include <cstdint>
#include "USessionTracker.hpp"
#pragma pack(push, 1)
class UStreamTimeSession : public USessionTracker {
public:
    static UStreamTimeSession* StaticClass();
    void Tick();
}; // Size: 0x28
#pragma pack(pop)
