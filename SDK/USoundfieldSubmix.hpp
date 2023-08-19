#pragma once
#include <cstdint>
#include "USoundSubmixWithParentBase.hpp"
class USoundfieldEncodingSettingsBase;
class USoundfieldEffectBase;
class UClass;
#pragma pack(push, 1)
class USoundfieldSubmix : public USoundSubmixWithParentBase {
public:
    FName SoundfieldEncodingFormat; // 0x40
    USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
    UClass* EncodingSettingsClass; // 0x60
    static USoundfieldSubmix* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
