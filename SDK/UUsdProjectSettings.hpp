#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UUsdProjectSettings : public UDeveloperSettings {
public:
    TArray<FDirectoryPath> AdditionalPluginDirectories; // 0x38
    static UUsdProjectSettings* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
