#pragma once
#include <cstdint>
#include "FSkinFXLocatorListPositionalSource.hpp"
#include "FSkinFXMaterialVectorProperty.hpp"
#include "USkinFXParameterDriver.hpp"
class USkinFXParameterLocatorListLerpIndexDriver;
#pragma pack(push, 1)
class USkinFXParameterLocatorListLerpDriver : public USkinFXParameterDriver {
public:
    FSkinFXMaterialVectorProperty Parameter; // 0x28
    TArray<FSkinFXLocatorListPositionalSource> Locators; // 0x30
    USkinFXParameterLocatorListLerpIndexDriver* LerpIndexDriver; // 0x40
    bool bLerpExtraColorsUsingHSV; // 0x48
    char pad_49[0x7];
    static USkinFXParameterLocatorListLerpDriver* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
