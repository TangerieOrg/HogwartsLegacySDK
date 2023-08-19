#pragma once
#include <cstdint>
#include "EStreamlineSettingOverride.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UStreamlineOverrideSettings : public UObject {
public:
    EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride; // 0x28
    EStreamlineSettingOverride LoadDebugOverlayOverride; // 0x29
    char pad_2a[0x6];
    static UStreamlineOverrideSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
