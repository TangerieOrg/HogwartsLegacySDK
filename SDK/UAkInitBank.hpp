#pragma once
#include <cstdint>
#include "UAkAssetBase.hpp"
#pragma pack(push, 1)
class UAkInitBank : public UAkAssetBase {
public:
    TArray<FString> AvailableAudioCultures; // 0x50
    FString DefaultLanguage; // 0x60
    static UAkInitBank* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
