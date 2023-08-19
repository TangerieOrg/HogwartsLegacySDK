#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UStreamlineSettings : public UObject {
public:
    bool bEnableStreamlineD3D12; // 0x28
    bool bEnableStreamlineD3D11; // 0x29
    bool bEnableDLSSFGInPlayInEditorViewports; // 0x2a
    bool bLoadDebugOverlay; // 0x2b
    bool bAllowOTAUpdate; // 0x2c
    char pad_2d[0x3];
    int32_t NVIDIANGXApplicationId; // 0x30
    char pad_34[0x4];
    static UStreamlineSettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
