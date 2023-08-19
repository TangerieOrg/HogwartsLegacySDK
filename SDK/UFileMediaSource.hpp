#pragma once
#include <cstdint>
#include "UBaseMediaSource.hpp"
#pragma pack(push, 1)
class UFileMediaSource : public UBaseMediaSource {
public:
    FString FilePath; // 0x88
    FString FilePathAlternative; // 0x98
    bool PrecacheFile; // 0xa8
    char pad_a9[0x27];
    static UFileMediaSource* StaticClass();
    void SetFilePath(FString Path);
}; // Size: 0xd0
#pragma pack(pop)
