#pragma once
#include <cstdint>
class UScriptStruct;
#pragma pack(push, 1)
struct FCacheEventTrack {
    FName Name; // 0x0
    UScriptStruct* Struct; // 0x8
    TArray<float> TimeStamps; // 0x10
    char pad_20[0x18];
}; // Size: 0x38
#pragma pack(pop)
