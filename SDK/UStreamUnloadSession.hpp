#pragma once
#include <cstdint>
#include "USessionTracker.hpp"
#pragma pack(push, 1)
class UStreamUnloadSession : public USessionTracker {
public:
    static UStreamUnloadSession* StaticClass();
    void Tick();
}; // Size: 0x28
#pragma pack(pop)
