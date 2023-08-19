#include "ASkinFXDefinitionGraph.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
#include "FSkinFXASREnvelope.hpp"
#include "FSkinFXExternalContext.hpp"
#include "FSkinFXRunningEffectInstance.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USkinFXComponent.hpp"
#include "UTexture.hpp"
USkinFXComponent* USkinFXComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXComponent");
    return (USkinFXComponent*)res;
}
void USkinFXComponent::SkinFXSetTimeFactor(UClass* FX, float TimeFactor, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXSetTimeFactor"));
    struct Params_SkinFXSetTimeFactor {
        UClass* FX; // 0x0
        float TimeFactor; // 0x8
        bool Success; // 0xc
    }; // Size: 0xd
    Params_SkinFXSetTimeFactor params{};
    params.FX = (UClass*)FX;
    params.TimeFactor = (float)TimeFactor;
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
    Success = params.Success;
}
bool USkinFXComponent::SkinFXUpdateRules(FName FX, FMaterialSwapRules newRules) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXUpdateRules"));
    struct Params_SkinFXUpdateRules {
        FName FX; // 0x0
        FMaterialSwapRules newRules; // 0x8
        bool ReturnValue; // 0xe8
    }; // Size: 0xe9
    Params_SkinFXUpdateRules params{};
    params.FX = (FName)FX;
    params.newRules = (FMaterialSwapRules)newRules;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkinFXComponent::SkinFXStartWithEnvelope(UClass* FX, FSkinFXASREnvelope UseEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXStartWithEnvelope"));
    struct Params_SkinFXStartWithEnvelope {
        UClass* FX; // 0x0
        FSkinFXASREnvelope UseEnvelope; // 0x8
        bool ReturnValue; // 0x34
    }; // Size: 0x35
    Params_SkinFXStartWithEnvelope params{};
    params.FX = (UClass*)FX;
    params.UseEnvelope = (FSkinFXASREnvelope)UseEnvelope;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinFXComponent::SkinFXGetCurrentScalarParameter(UClass* FX, FName ParameterName, float& ParameterValue, bool& bParameterFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXGetCurrentScalarParameter"));
    struct Params_SkinFXGetCurrentScalarParameter {
        UClass* FX; // 0x0
        FName ParameterName; // 0x8
        float ParameterValue; // 0x10
        bool bParameterFound; // 0x14
    }; // Size: 0x15
    Params_SkinFXGetCurrentScalarParameter params{};
    params.FX = (UClass*)FX;
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (float)ParameterValue;
    params.bParameterFound = (bool)bParameterFound;
    ProcessEvent(func, &params);
    ParameterValue = params.ParameterValue;
    bParameterFound = params.bParameterFound;
}
bool USkinFXComponent::SkinFXStartWithRulesAndEnvelope(UClass* FX, FMaterialSwapRules swapRules, FSkinFXASREnvelope UseEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXStartWithRulesAndEnvelope"));
    struct Params_SkinFXStartWithRulesAndEnvelope {
        UClass* FX; // 0x0
        FMaterialSwapRules swapRules; // 0x8
        FSkinFXASREnvelope UseEnvelope; // 0xe8
        bool ReturnValue; // 0x114
    }; // Size: 0x115
    Params_SkinFXStartWithRulesAndEnvelope params{};
    params.FX = (UClass*)FX;
    params.swapRules = (FMaterialSwapRules)swapRules;
    params.UseEnvelope = (FSkinFXASREnvelope)UseEnvelope;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinFXComponent::SkinFXSetExternalVectorParameter(UClass* FX, FName ParameterName, FVector Value, float packAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXSetExternalVectorParameter"));
    struct Params_SkinFXSetExternalVectorParameter {
        UClass* FX; // 0x0
        FName ParameterName; // 0x8
        FVector Value; // 0x10
        float packAlpha; // 0x1c
    }; // Size: 0x20
    Params_SkinFXSetExternalVectorParameter params{};
    params.FX = (UClass*)FX;
    params.ParameterName = (FName)ParameterName;
    params.Value = (FVector)Value;
    params.packAlpha = (float)packAlpha;
    ProcessEvent(func, &params);
}
bool USkinFXComponent::SkinFXStartWithRules(UClass* FX, FMaterialSwapRules swapRules) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXStartWithRules"));
    struct Params_SkinFXStartWithRules {
        UClass* FX; // 0x0
        FMaterialSwapRules swapRules; // 0x8
        bool ReturnValue; // 0xe8
    }; // Size: 0xe9
    Params_SkinFXStartWithRules params{};
    params.FX = (UClass*)FX;
    params.swapRules = (FMaterialSwapRules)swapRules;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkinFXComponent::SkinFXAnyRunning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXAnyRunning"));
    struct Params_SkinFXAnyRunning {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SkinFXAnyRunning params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkinFXComponent::SkinFXStart(UClass* FX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXStart"));
    struct Params_SkinFXStart {
        UClass* FX; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SkinFXStart params{};
    params.FX = (UClass*)FX;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinFXComponent::SkinFXSetExternalTextureParameter(UClass* FX, FName ParameterName, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXSetExternalTextureParameter"));
    struct Params_SkinFXSetExternalTextureParameter {
        UClass* FX; // 0x0
        FName ParameterName; // 0x8
        UTexture* Value; // 0x10
    }; // Size: 0x18
    Params_SkinFXSetExternalTextureParameter params{};
    params.FX = (UClass*)FX;
    params.ParameterName = (FName)ParameterName;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void USkinFXComponent::SkinFXSetExternalScalarParameter(UClass* FX, FName ParameterName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXSetExternalScalarParameter"));
    struct Params_SkinFXSetExternalScalarParameter {
        UClass* FX; // 0x0
        FName ParameterName; // 0x8
        float Value; // 0x10
    }; // Size: 0x14
    Params_SkinFXSetExternalScalarParameter params{};
    params.FX = (UClass*)FX;
    params.ParameterName = (FName)ParameterName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void USkinFXComponent::SkinFXSetExternalParameters(UClass* FX, FMaterialSwapParameters& parameterValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXSetExternalParameters"));
    struct Params_SkinFXSetExternalParameters {
        UClass* FX; // 0x0
        FMaterialSwapParameters parameterValues; // 0x8
    }; // Size: 0x58
    Params_SkinFXSetExternalParameters params{};
    params.FX = (UClass*)FX;
    params.parameterValues = (FMaterialSwapParameters)parameterValues;
    ProcessEvent(func, &params);
    parameterValues = params.parameterValues;
}
void USkinFXComponent::SkinFXSetExternalColorParameter(UClass* FX, FName ParameterName, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXSetExternalColorParameter"));
    struct Params_SkinFXSetExternalColorParameter {
        UClass* FX; // 0x0
        FName ParameterName; // 0x8
        FLinearColor Value; // 0x10
    }; // Size: 0x20
    Params_SkinFXSetExternalColorParameter params{};
    params.FX = (UClass*)FX;
    params.ParameterName = (FName)ParameterName;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
bool USkinFXComponent::SkinFXIsRunning(UClass* FX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXIsRunning"));
    struct Params_SkinFXIsRunning {
        UClass* FX; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SkinFXIsRunning params{};
    params.FX = (UClass*)FX;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinFXComponent::SkinFXGetTimeFactor(UClass* FX, float& TimeFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXGetTimeFactor"));
    struct Params_SkinFXGetTimeFactor {
        UClass* FX; // 0x0
        float TimeFactor; // 0x8
    }; // Size: 0xc
    Params_SkinFXGetTimeFactor params{};
    params.FX = (UClass*)FX;
    params.TimeFactor = (float)TimeFactor;
    ProcessEvent(func, &params);
    TimeFactor = params.TimeFactor;
}
void USkinFXComponent::SkinFXGetEffectBlueprintGraph(UClass* FX, ASkinFXDefinitionGraph*& EffectDefinitionGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXGetEffectBlueprintGraph"));
    struct Params_SkinFXGetEffectBlueprintGraph {
        UClass* FX; // 0x0
        ASkinFXDefinitionGraph* EffectDefinitionGraph; // 0x8
    }; // Size: 0x10
    Params_SkinFXGetEffectBlueprintGraph params{};
    params.FX = (UClass*)FX;
    params.EffectDefinitionGraph = (ASkinFXDefinitionGraph*)EffectDefinitionGraph;
    ProcessEvent(func, &params);
    EffectDefinitionGraph = params.EffectDefinitionGraph;
}
void USkinFXComponent::SkinFXGetCurrentParameters(UClass* FX, FMaterialSwapParameters& CurrentParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXGetCurrentParameters"));
    struct Params_SkinFXGetCurrentParameters {
        UClass* FX; // 0x0
        FMaterialSwapParameters CurrentParameters; // 0x8
    }; // Size: 0x58
    Params_SkinFXGetCurrentParameters params{};
    params.FX = (UClass*)FX;
    params.CurrentParameters = (FMaterialSwapParameters)CurrentParameters;
    ProcessEvent(func, &params);
    CurrentParameters = params.CurrentParameters;
}
void USkinFXComponent::SkinFXGetCurrentColorParameter(UClass* FX, FName ParameterName, FLinearColor& ParameterValue, bool& bParameterFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXGetCurrentColorParameter"));
    struct Params_SkinFXGetCurrentColorParameter {
        UClass* FX; // 0x0
        FName ParameterName; // 0x8
        FLinearColor ParameterValue; // 0x10
        bool bParameterFound; // 0x20
    }; // Size: 0x21
    Params_SkinFXGetCurrentColorParameter params{};
    params.FX = (UClass*)FX;
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (FLinearColor)ParameterValue;
    params.bParameterFound = (bool)bParameterFound;
    ProcessEvent(func, &params);
    ParameterValue = params.ParameterValue;
    bParameterFound = params.bParameterFound;
}
bool USkinFXComponent::SkinFXEndAll(ESkinFXEffectEndStyle EndStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXEndAll"));
    struct Params_SkinFXEndAll {
        ESkinFXEffectEndStyle EndStyle; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SkinFXEndAll params{};
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkinFXComponent::SkinFXEnd(UClass* FX, ESkinFXEffectEndStyle EndStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXEnd"));
    struct Params_SkinFXEnd {
        UClass* FX; // 0x0
        ESkinFXEffectEndStyle EndStyle; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SkinFXEnd params{};
    params.FX = (UClass*)FX;
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinFXComponent::SkinFXClearExternalParameters(UClass* FX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXComponent.SkinFXClearExternalParameters"));
    struct Params_SkinFXClearExternalParameters {
        UClass* FX; // 0x0
    }; // Size: 0x8
    Params_SkinFXClearExternalParameters params{};
    params.FX = (UClass*)FX;
    ProcessEvent(func, &params);
}
