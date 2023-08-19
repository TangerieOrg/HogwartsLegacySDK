#pragma once
#include <cstdint>
#include "UAkAudioType.hpp"
#pragma pack(push, 1)
class UAkFolder : public UAkAudioType {
public:
    FString UnrealFolderPath; // 0x40
    FString WwiseFolderPath; // 0x50
    char pad_60[0x58];
    static UAkFolder* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
