#pragma once
#include <cstdint>
#include "USessionTracker.hpp"
#pragma pack(push, 1)
class ULockPlayerSession : public USessionTracker {
public:
    static ULockPlayerSession* StaticClass();
    void Tick();
}; // Size: 0x28
#pragma pack(pop)
