#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkAudioType : public UObject {
public:
    uint32_t ShortID; // 0x28
    char pad_2c[0x4];
    TArray<UObject*> UserData; // 0x30
    static UAkAudioType* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
