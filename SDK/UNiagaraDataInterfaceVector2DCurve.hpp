#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase {
public:
    FRichCurve XCurve; // 0x70
    FRichCurve YCurve; // 0xf0
    static UNiagaraDataInterfaceVector2DCurve* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
