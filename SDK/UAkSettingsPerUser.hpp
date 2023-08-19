#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "FFilePath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkSettingsPerUser : public UObject {
public:
    FDirectoryPath WwiseWindowsInstallationPath; // 0x28
    FFilePath WwiseMacInstallationPath; // 0x38
    bool EnableAutomaticAssetSynchronization; // 0x48
    char pad_49[0x7];
    FString WaapiIPAddress; // 0x50
    uint32_t WaapiPort; // 0x60
    bool bAutoConnectToWAAPI; // 0x64
    bool AutoSyncSelection; // 0x65
    bool SuppressWwiseProjectPathWarnings; // 0x66
    bool SoundDataGenerationSkipLanguage; // 0x67
    char pad_68[0x18];
    static UAkSettingsPerUser* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
