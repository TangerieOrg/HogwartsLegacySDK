#pragma once
#include <cstdint>
#include "AActor.hpp"
class URemoteControlPreset;
#pragma pack(push, 1)
class ARemoteControlPresetActor : public AActor {
public:
    URemoteControlPreset* Preset; // 0x248
    char pad_250[0x8];
    static ARemoteControlPresetActor* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
