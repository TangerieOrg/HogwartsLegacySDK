#pragma once
#include <cstdint>
#include "FTouchInputControl.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTouchInterface : public UObject {
public:
    TArray<FTouchInputControl> Controls; // 0x28
    float ActiveOpacity; // 0x38
    float InactiveOpacity; // 0x3c
    float TimeUntilDeactive; // 0x40
    float TimeUntilReset; // 0x44
    float ActivationDelay; // 0x48
    bool bPreventRecenter; // 0x4c
    char pad_4d[0x3];
    float StartupDelay; // 0x50
    char pad_54[0x4];
    static UTouchInterface* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
