#pragma once
#include <cstdint>
#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FLinearColor;
#pragma pack(push, 1)
class UGlobalLightingCustomBlendablesLibrary : public UBlueprintFunctionLibrary {
public:
    static UGlobalLightingCustomBlendablesLibrary* StaticClass();
    static bool GetGlobalLightingCustomBlendableScalarName(UObject* WorldContextObject, FName ScalarName, float& ScalarValue);
    static bool GetGlobalLightingCustomBlendableScalar(UObject* WorldContextObject, FGlobalLightingCustomBlendableNameScalar Scalar, float& ScalarValue);
    static bool GetGlobalLightingCustomBlendableLinearColorName(UObject* WorldContextObject, FName ColorName, FLinearColor& ColorValue);
    static bool GetGlobalLightingCustomBlendableLinearColor(UObject* WorldContextObject, FGlobalLightingCustomBlendableNameLinearColor Color, FLinearColor& ColorValue);
    static bool GetDefaultGlobalLightingCustomBlendableScalarName(FName ScalarName, float& ScalarValue);
    static bool GetDefaultGlobalLightingCustomBlendableScalar(FGlobalLightingCustomBlendableNameScalar Scalar, float& ScalarValue);
    static bool GetDefaultGlobalLightingCustomBlendableLinearColorName(FName ColorName, FLinearColor& ColorValue);
    static bool GetDefaultGlobalLightingCustomBlendableLinearColor(FGlobalLightingCustomBlendableNameLinearColor Color, FLinearColor& ColorValue);
}; // Size: 0x28
#pragma pack(pop)
