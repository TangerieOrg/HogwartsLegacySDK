#pragma once
#include <cstdint>
#include "FSkinFXMaterialParamProperty.hpp"
#include "USkinFXParameterDriver.hpp"
#pragma pack(push, 1)
class USkinFXParameterDriverMod : public USkinFXParameterDriver {
public:
    FSkinFXMaterialParamProperty Parameter; // 0x28
    static USkinFXParameterDriverMod* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
