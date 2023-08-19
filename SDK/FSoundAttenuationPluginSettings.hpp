#pragma once
#include <cstdint>
class USpatializationPluginSourceSettingsBase;
class UOcclusionPluginSourceSettingsBase;
class UReverbPluginSourceSettingsBase;
#pragma pack(push, 1)
struct FSoundAttenuationPluginSettings {
    TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
    TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
    TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
}; // Size: 0x30
#pragma pack(pop)
