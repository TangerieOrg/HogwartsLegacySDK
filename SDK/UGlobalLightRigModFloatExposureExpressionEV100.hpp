#pragma once
#include <cstdint>
#include "UGlobalLightRigModFloatExternal.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
class UGlobalLightRigModFloatExposureExpressionEV100 : public UGlobalLightRigModFloatExternal {
public:
    UExposureExpressionsExposureValue* ExposureExpression; // 0x48
    static UGlobalLightRigModFloatExposureExpressionEV100* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
