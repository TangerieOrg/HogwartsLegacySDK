#pragma once
#include <cstdint>
#include "EDLSSSettingOverride.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UDLSSOverrideSettings : public UObject {
public:
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28
    EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x2a
    bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x2b
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x2c
    char pad_2d[0x3];
    static UDLSSOverrideSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
