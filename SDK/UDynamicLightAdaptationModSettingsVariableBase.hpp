#pragma once
#include <cstdint>
#include "ELightAdapatationModOp.hpp"
#include "ELightAdapatationProperty.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsVariableBase : public UDynamicLightAdaptationModSettingsInterface {
public:
    ELightAdapatationProperty ModProperty; // 0x28
    ELightAdapatationModOp ModOp; // 0x29
    char pad_2a[0x6];
    static UDynamicLightAdaptationModSettingsVariableBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
