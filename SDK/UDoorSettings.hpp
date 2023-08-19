#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
class UClass;
#pragma pack(push, 1)
class UDoorSettings : public UDeveloperSettings {
public:
    UClass* SpinnerWidgetClass; // 0x38
    static UDoorSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
