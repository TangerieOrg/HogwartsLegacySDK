#pragma once
#include <cstdint>
#include "UAkAudioType.hpp"
#pragma pack(push, 1)
class UAkGroupValue : public UAkAudioType {
public:
    TArray<void*> MediaDependencies; // 0x40
    uint32_t GroupShortID; // 0x50
    char pad_54[0x14];
    static UAkGroupValue* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
