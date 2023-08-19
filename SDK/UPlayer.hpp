#pragma once
#include <cstdint>
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class UPlayer : public UObject {
public:
    char pad_28[0x8];
    APlayerController* PlayerController; // 0x30
    int32_t CurrentNetSpeed; // 0x38
    int32_t ConfiguredInternetSpeed; // 0x3c
    int32_t ConfiguredLanSpeed; // 0x40
    char pad_44[0x4];
    static UPlayer* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
