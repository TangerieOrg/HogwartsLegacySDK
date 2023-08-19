#pragma once
#include <cstdint>
#include "FLightmassPrimitiveSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULightmassPrimitiveSettingsObject : public UObject {
public:
    FLightmassPrimitiveSettings LightmassSettings; // 0x28
    static ULightmassPrimitiveSettingsObject* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
