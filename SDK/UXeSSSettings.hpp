#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UXeSSSettings : public UDeveloperSettings {
public:
    bool bEnableXeSSInEditorViewports; // 0x38
    char pad_39[0x7];
    FString DebugDataDumpPath; // 0x40
    static UXeSSSettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
