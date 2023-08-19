#pragma once
#include <cstdint>
#include "FExposureExpressions.hpp"
#include "FExposureExpressionsExtrasDefaults.hpp"
#include "FRenderSettingsEmissiveAdaptation.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UDataAsset.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
class URenderSettingsEmissiveAdaptationSettings : public UDataAsset {
public:
    char pad_30[0x8];
    FRuntimeFloatCurve NightDayLerp; // 0x38
    FRuntimeFloatCurve OutdoorsIndoorsLerp; // 0xc0
    UMaterialParameterCollection* MaterialParameterCollection; // 0x148
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x150
    FExposureExpressions GlobalExpressions; // 0x158
    FExposureExpressionsExtrasDefaults Extras; // 0x218
    UExposureExpressionsExposureValue* AutoExposureBaseExpression; // 0x258
    UExposureExpressionsExposureValue* AverageLuminanceBaseExpression; // 0x260
    UExposureExpressionsExposureValue* FilteredAverageLuminanceBaseExpression; // 0x268
    TArray<FRenderSettingsEmissiveAdaptation> Settings; // 0x270
    static URenderSettingsEmissiveAdaptationSettings* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
