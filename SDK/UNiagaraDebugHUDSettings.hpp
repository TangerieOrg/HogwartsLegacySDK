#pragma once
#include <cstdint>
#include "FNiagaraDebugHUDSettingsData.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraDebugHUDSettings : public UObject {
public:
    char pad_28[0x20];
    FNiagaraDebugHUDSettingsData Data; // 0x48
    static UNiagaraDebugHUDSettings* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
