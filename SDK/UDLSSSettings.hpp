#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDLSSSettings : public UObject {
public:
    bool bEnableDLSSD3D12; // 0x28
    bool bEnableDLSSD3D11; // 0x29
    bool bEnableDLSSVulkan; // 0x2a
    bool bEnableDLSSInEditorViewports; // 0x2b
    bool bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x2c
    bool bEnableDLSSInPlayInEditorViewports; // 0x2d
    bool bShowDLSSSDebugOnScreenMessages; // 0x2e
    char pad_2f[0x1];
    FString GenericDLSSBinaryPath; // 0x30
    bool bGenericDLSSBinaryExists; // 0x40
    char pad_41[0x3];
    uint32_t NVIDIANGXApplicationId; // 0x44
    FString CustomDLSSBinaryPath; // 0x48
    bool bCustomDLSSBinaryExists; // 0x58
    char pad_59[0x7];
    static UDLSSSettings* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
