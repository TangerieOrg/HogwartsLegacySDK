#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "FLinearColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UGlobalLightingCustomBlendablesLibrary.hpp"
#include "UObject.hpp"
UGlobalLightingCustomBlendablesLibrary* UGlobalLightingCustomBlendablesLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary");
    return (UGlobalLightingCustomBlendablesLibrary*)res;
}
bool UGlobalLightingCustomBlendablesLibrary::GetGlobalLightingCustomBlendableLinearColorName(UObject* WorldContextObject, FName ColorName, FLinearColor& ColorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableLinearColorName"));
    struct Params_GetGlobalLightingCustomBlendableLinearColorName {
        UObject* WorldContextObject; // 0x0
        FName ColorName; // 0x8
        FLinearColor ColorValue; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetGlobalLightingCustomBlendableLinearColorName params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ColorName = (FName)ColorName;
    params.ColorValue = (FLinearColor)ColorValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ColorValue = params.ColorValue;
    return (bool)params.ReturnValue;
}
bool UGlobalLightingCustomBlendablesLibrary::GetGlobalLightingCustomBlendableScalarName(UObject* WorldContextObject, FName ScalarName, float& ScalarValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableScalarName"));
    struct Params_GetGlobalLightingCustomBlendableScalarName {
        UObject* WorldContextObject; // 0x0
        FName ScalarName; // 0x8
        float ScalarValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetGlobalLightingCustomBlendableScalarName params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ScalarName = (FName)ScalarName;
    params.ScalarValue = (float)ScalarValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalarValue = params.ScalarValue;
    return (bool)params.ReturnValue;
}
bool UGlobalLightingCustomBlendablesLibrary::GetGlobalLightingCustomBlendableScalar(UObject* WorldContextObject, FGlobalLightingCustomBlendableNameScalar Scalar, float& ScalarValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableScalar"));
    struct Params_GetGlobalLightingCustomBlendableScalar {
        UObject* WorldContextObject; // 0x0
        FGlobalLightingCustomBlendableNameScalar Scalar; // 0x8
        float ScalarValue; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_GetGlobalLightingCustomBlendableScalar params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Scalar = (FGlobalLightingCustomBlendableNameScalar)Scalar;
    params.ScalarValue = (float)ScalarValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalarValue = params.ScalarValue;
    return (bool)params.ReturnValue;
}
bool UGlobalLightingCustomBlendablesLibrary::GetDefaultGlobalLightingCustomBlendableScalar(FGlobalLightingCustomBlendableNameScalar Scalar, float& ScalarValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableScalar"));
    struct Params_GetDefaultGlobalLightingCustomBlendableScalar {
        FGlobalLightingCustomBlendableNameScalar Scalar; // 0x0
        float ScalarValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetDefaultGlobalLightingCustomBlendableScalar params{};
    params.Scalar = (FGlobalLightingCustomBlendableNameScalar)Scalar;
    params.ScalarValue = (float)ScalarValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalarValue = params.ScalarValue;
    return (bool)params.ReturnValue;
}
bool UGlobalLightingCustomBlendablesLibrary::GetGlobalLightingCustomBlendableLinearColor(UObject* WorldContextObject, FGlobalLightingCustomBlendableNameLinearColor Color, FLinearColor& ColorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetGlobalLightingCustomBlendableLinearColor"));
    struct Params_GetGlobalLightingCustomBlendableLinearColor {
        UObject* WorldContextObject; // 0x0
        FGlobalLightingCustomBlendableNameLinearColor Color; // 0x8
        FLinearColor ColorValue; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetGlobalLightingCustomBlendableLinearColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Color = (FGlobalLightingCustomBlendableNameLinearColor)Color;
    params.ColorValue = (FLinearColor)ColorValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ColorValue = params.ColorValue;
    return (bool)params.ReturnValue;
}
bool UGlobalLightingCustomBlendablesLibrary::GetDefaultGlobalLightingCustomBlendableScalarName(FName ScalarName, float& ScalarValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableScalarName"));
    struct Params_GetDefaultGlobalLightingCustomBlendableScalarName {
        FName ScalarName; // 0x0
        float ScalarValue; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetDefaultGlobalLightingCustomBlendableScalarName params{};
    params.ScalarName = (FName)ScalarName;
    params.ScalarValue = (float)ScalarValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScalarValue = params.ScalarValue;
    return (bool)params.ReturnValue;
}
bool UGlobalLightingCustomBlendablesLibrary::GetDefaultGlobalLightingCustomBlendableLinearColorName(FName ColorName, FLinearColor& ColorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableLinearColorName"));
    struct Params_GetDefaultGlobalLightingCustomBlendableLinearColorName {
        FName ColorName; // 0x0
        FLinearColor ColorValue; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetDefaultGlobalLightingCustomBlendableLinearColorName params{};
    params.ColorName = (FName)ColorName;
    params.ColorValue = (FLinearColor)ColorValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ColorValue = params.ColorValue;
    return (bool)params.ReturnValue;
}
bool UGlobalLightingCustomBlendablesLibrary::GetDefaultGlobalLightingCustomBlendableLinearColor(FGlobalLightingCustomBlendableNameLinearColor Color, FLinearColor& ColorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingCustomBlendablesLibrary.GetDefaultGlobalLightingCustomBlendableLinearColor"));
    struct Params_GetDefaultGlobalLightingCustomBlendableLinearColor {
        FGlobalLightingCustomBlendableNameLinearColor Color; // 0x0
        FLinearColor ColorValue; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetDefaultGlobalLightingCustomBlendableLinearColor params{};
    params.Color = (FGlobalLightingCustomBlendableNameLinearColor)Color;
    params.ColorValue = (FLinearColor)ColorValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ColorValue = params.ColorValue;
    return (bool)params.ReturnValue;
}
