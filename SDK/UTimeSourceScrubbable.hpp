#pragma once
#include <cstdint>
#include "FDateInput.hpp"
#include "UTimeSourceVolume.hpp"
class UTimeSourceScrubbableControlBase;
class UClass;
#pragma pack(push, 1)
class UTimeSourceScrubbable : public UTimeSourceVolume {
public:
    FDateInput BaseDate; // 0x28
    char pad_34[0x4];
    UTimeSourceScrubbableControlBase* Control; // 0x38
    UClass* ControlClass; // 0x40
    bool bEnabled; // 0x48
    char pad_49[0x7];
    static UTimeSourceScrubbable* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
