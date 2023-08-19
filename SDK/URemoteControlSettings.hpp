#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class URemoteControlSettings : public UDeveloperSettings {
public:
    bool bProtocolsGenerateTransactions; // 0x38
    char pad_39[0x3];
    uint32_t RemoteControlWebInterfacePort; // 0x3c
    bool bForceWebAppBuildAtStartup; // 0x40
    bool bAutoStartWebServer; // 0x41
    bool bAutoStartWebSocketServer; // 0x42
    char pad_43[0x1];
    uint32_t RemoteControlHttpServerPort; // 0x44
    uint32_t RemoteControlWebSocketServerPort; // 0x48
    bool bDisplayInEditorOnlyWarnings; // 0x4c
    char pad_4d[0x3];
    float TreeBindingSplitRatio; // 0x50
    char pad_54[0x4];
    static URemoteControlSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
