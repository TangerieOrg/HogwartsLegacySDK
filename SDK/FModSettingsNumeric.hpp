#pragma once
#include <cstdint>
#include "EInputModType.hpp"
#include "EPropModCalculationType.hpp"
#include "ETimeBasedEffectType.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FModSettingsNumeric {
    EPropModCalculationType CalculationType; // 0x0
    ETimeBasedEffectType TimeBasedEffect; // 0x1
    EInputModType ExternalInputEffect; // 0x2
    char pad_3[0x5];
    FRuntimeFloatCurve TimeCurve; // 0x8
    FRuntimeFloatCurve InputCurve; // 0x90
}; // Size: 0x118
#pragma pack(pop)
