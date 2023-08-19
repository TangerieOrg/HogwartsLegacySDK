#pragma once
#include <cstdint>
#include "UWindAffectedComponent.hpp"
#pragma pack(push, 1)
class UWindAffectedComponentRefresh : public UWindAffectedComponent {
public:
    float WindRefreshRate; // 0x240
    bool bWaitForBeginPlay; // 0x244
    char pad_245[0xb];
    static UWindAffectedComponentRefresh* StaticClass();
    void WindUpdatesPaused(bool& bPaused);
    void SetWindRefreshRate(float NewWindRefreshRate);
    void PauseWindUpdates(bool bPause);
}; // Size: 0x250
#pragma pack(pop)
