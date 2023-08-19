#pragma once
#include <cstdint>
class UCameraShakeBase;
#pragma pack(push, 1)
struct FActiveCameraShakeInfo {
    UCameraShakeBase* ShakeInstance; // 0x0
    char pad_8[0x8];
    bool bIsCustomInitialized; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
