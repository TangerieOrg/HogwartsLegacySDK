#pragma once
#include <cstdint>
#include "FUpdateNiagaraFXColorCurve.hpp"
#include "FUpdateNiagaraFXFloatCurve.hpp"
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_NiagaraCurves : public UFXUpdate_Tick {
public:
    TArray<FUpdateNiagaraFXFloatCurve> FloatCurves; // 0x80
    TArray<FUpdateNiagaraFXColorCurve> ColorCurves; // 0x90
    static UFXUpdate_NiagaraCurves* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
