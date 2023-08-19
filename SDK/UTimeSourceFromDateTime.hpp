#pragma once
#include <cstdint>
#include "FDateTimeInput.hpp"
#include "UTimeSourceLocal.hpp"
#pragma pack(push, 1)
class UTimeSourceFromDateTime : public UTimeSourceLocal {
public:
    FDateTimeInput DateTime; // 0x38
    float Rate; // 0x50
    bool bUseRate; // 0x54
    bool bEnabled; // 0x55
    char pad_56[0x2];
    static UTimeSourceFromDateTime* StaticClass();
    void EditorForceUpdate();
}; // Size: 0x58
#pragma pack(pop)
