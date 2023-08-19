#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase {
public:
    FRichCurve RedCurve; // 0x70
    FRichCurve GreenCurve; // 0xf0
    FRichCurve BlueCurve; // 0x170
    FRichCurve AlphaCurve; // 0x1f0
    static UNiagaraDataInterfaceColorCurve* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
