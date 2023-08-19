#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FRemoteControlPresetLayout.hpp"
#include "UObject.hpp"
class URemoteControlBinding;
class URemoteControlExposeRegistry;
#pragma pack(push, 1)
class URemoteControlPreset : public UObject {
public:
    FRemoteControlPresetLayout Layout; // 0x28
    char pad_e8[0x50];
    TArray<URemoteControlBinding*> Bindings; // 0x138
    FGuid PresetId; // 0x148
    char pad_158[0xf0];
    URemoteControlExposeRegistry* Registry; // 0x248
    char pad_250[0x298];
    static URemoteControlPreset* StaticClass();
}; // Size: 0x4e8
#pragma pack(pop)
