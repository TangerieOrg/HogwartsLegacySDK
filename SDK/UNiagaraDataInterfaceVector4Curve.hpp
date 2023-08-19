#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "UNiagaraDataInterfaceCurveBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase {
public:
    FRichCurve XCurve; // 0x70
    FRichCurve YCurve; // 0xf0
    FRichCurve ZCurve; // 0x170
    FRichCurve WCurve; // 0x1f0
    static UNiagaraDataInterfaceVector4Curve* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
