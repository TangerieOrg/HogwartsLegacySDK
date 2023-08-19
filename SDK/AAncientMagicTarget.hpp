#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AAncientMagicTarget : public AActor {
public:
    bool Discovered; // 0x248
    char pad_249[0x7];
    static AAncientMagicTarget* StaticClass();
    void SetDebugVisible(bool DebugVisibleIn);
    void Reset();
    void OnReset();
    void OnDiscover();
    void Discover();
}; // Size: 0x250
#pragma pack(pop)
