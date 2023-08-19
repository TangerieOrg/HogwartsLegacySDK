#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase {
public:
    FRichCurve XCurve; // 0x70
    FRichCurve YCurve; // 0xf0
    FRichCurve ZCurve; // 0x170
    static UNiagaraDataInterfaceVectorCurve* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)
