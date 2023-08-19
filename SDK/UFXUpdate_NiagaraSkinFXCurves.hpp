#pragma once
#include <cstdint>
#include "FUpdateNiagaraSkinFXColorCurve.hpp"
#include "FUpdateNiagaraSkinFXFloatCurve.hpp"
#include "UFXUpdate_Tick.hpp"
class UClass;
#pragma pack(push, 1)
class UFXUpdate_NiagaraSkinFXCurves : public UFXUpdate_Tick {
public:
    TArray<FUpdateNiagaraSkinFXFloatCurve> FloatCurves; // 0x80
    TArray<FUpdateNiagaraSkinFXColorCurve> ColorCurves; // 0x90
    UClass* SkinFX; // 0xa0
    static UFXUpdate_NiagaraSkinFXCurves* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
