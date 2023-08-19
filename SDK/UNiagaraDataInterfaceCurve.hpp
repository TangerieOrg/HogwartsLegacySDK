#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase {
public:
    FRichCurve Curve; // 0x70
    static UNiagaraDataInterfaceCurve* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
