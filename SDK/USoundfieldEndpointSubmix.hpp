#pragma once
#include <cstdint>
#include "USoundSubmixBase.hpp"
class UClass;
class USoundfieldEndpointSettingsBase;
class USoundfieldEncodingSettingsBase;
class USoundfieldEffectBase;
#pragma pack(push, 1)
class USoundfieldEndpointSubmix : public USoundSubmixBase {
public:
    FName SoundfieldEndpointType; // 0x38
    UClass* EndpointSettingsClass; // 0x40
    USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
    UClass* EncodingSettingsClass; // 0x50
    USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
    static USoundfieldEndpointSubmix* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
