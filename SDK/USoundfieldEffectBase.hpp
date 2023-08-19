#pragma once
#include <cstdint>
#include "UObject.hpp"
class USoundfieldEffectSettingsBase;
#pragma pack(push, 1)
class USoundfieldEffectBase : public UObject {
public:
    USoundfieldEffectSettingsBase* Settings; // 0x28
    static USoundfieldEffectBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
