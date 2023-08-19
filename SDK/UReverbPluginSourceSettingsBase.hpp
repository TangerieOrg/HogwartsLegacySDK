#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UReverbPluginSourceSettingsBase : public UObject {
public:
    static UReverbPluginSourceSettingsBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
