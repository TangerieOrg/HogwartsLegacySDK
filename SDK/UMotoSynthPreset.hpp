#pragma once
#include <cstdint>
#include "FMotoSynthRuntimeSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMotoSynthPreset : public UObject {
public:
    FMotoSynthRuntimeSettings Settings; // 0x28
    static UMotoSynthPreset* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
