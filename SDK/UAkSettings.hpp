#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FDirectoryPath.hpp"
#include "FFilePath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkSettings : public UObject {
public:
    uint8_t MaxSimultaneousReverbVolumes; // 0x28
    char pad_29[0x7];
    FFilePath WwiseProjectPath; // 0x30
    FDirectoryPath WwiseSoundDataFolder; // 0x40
    bool bAutoConnectToWAAPI; // 0x50
    ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51
    ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x52
    char pad_53[0x55];
    float GlobalDecayAbsorption; // 0xa8
    char pad_ac[0x7c];
    FString HFDampingName; // 0x128
    FString DecayEstimateName; // 0x138
    FString TimeToFirstReflectionName; // 0x148
    char pad_158[0xf0];
    bool SplitSwitchContainerMedia; // 0x248
    bool SplitMediaPerFolder; // 0x249
    bool UseEventBasedPackaging; // 0x24a
    bool EnableAutomaticAssetSynchronization; // 0x24b
    char pad_24c[0x4];
    FString CommandletCommitMessage; // 0x250
    char pad_260[0x50];
    bool AskedToUseNewAssetManagement; // 0x2b0
    bool bEnableMultiCoreRendering; // 0x2b1
    bool MigratedEnableMultiCoreRendering; // 0x2b2
    bool FixupRedirectorsDuringMigration; // 0x2b3
    char pad_2b4[0x4];
    FDirectoryPath WwiseWindowsInstallationPath; // 0x2b8
    FFilePath WwiseMacInstallationPath; // 0x2c8
    char pad_2d8[0x8];
    static UAkSettings* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
