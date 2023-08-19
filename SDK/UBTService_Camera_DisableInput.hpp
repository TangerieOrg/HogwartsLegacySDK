#pragma once
#include <cstdint>
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_Camera_DisableInput : public UBTService {
public:
    bool bDisableLookX; // 0x70
    bool bDisableLookY; // 0x71
    bool bOverrideMinDeadzone; // 0x72
    char pad_73[0x1];
    float MinDeadzone; // 0x74
    static UBTService_Camera_DisableInput* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
