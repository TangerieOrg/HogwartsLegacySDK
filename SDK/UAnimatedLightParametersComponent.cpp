#include "FAnimatedLightExtraParameter.hpp"
#include "FAnimatedLightExtraSetupMaterialParameter.hpp"
#include "FAnimatedLightExtraSetupNiagaraParameter.hpp"
#include "UAnimatedLightParametersComponent.hpp"
#include "UAnimatedLightParametersComponentAuto.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
UAnimatedLightParametersComponent* UAnimatedLightParametersComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightParametersComponent");
    return (UAnimatedLightParametersComponent*)res;
}
bool UAnimatedLightParametersComponent::RemoveAnimatedLightNiagaraParameter(FName Parameter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightNiagaraParameter"));
    struct Params_RemoveAnimatedLightNiagaraParameter {
        FName Parameter; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveAnimatedLightNiagaraParameter params{};
    params.Parameter = (FName)Parameter;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::RemoveAnimatedLightParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightParameters"));
    struct Params_RemoveAnimatedLightParameters {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RemoveAnimatedLightParameters params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::RemoveAnimatedLightParameter(FName Parameter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightParameter"));
    struct Params_RemoveAnimatedLightParameter {
        FName Parameter; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveAnimatedLightParameter params{};
    params.Parameter = (FName)Parameter;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::RemoveAnimatedLightNiagaraParameters(UNiagaraComponent* NiagaraComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightNiagaraParameters"));
    struct Params_RemoveAnimatedLightNiagaraParameters {
        UNiagaraComponent* NiagaraComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveAnimatedLightNiagaraParameters params{};
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::RemoveAnimatedLightMaterialParameters(UMaterialInstanceDynamic* MaterialInstanceDynamic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightMaterialParameters"));
    struct Params_RemoveAnimatedLightMaterialParameters {
        UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveAnimatedLightMaterialParameters params{};
    params.MaterialInstanceDynamic = (UMaterialInstanceDynamic*)MaterialInstanceDynamic;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::AddAnimatedLightNiagaraParameters(UNiagaraComponent* NiagaraComponent, TArray<FAnimatedLightExtraParameter> ParameterList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightNiagaraParameters"));
    struct Params_AddAnimatedLightNiagaraParameters {
        UNiagaraComponent* NiagaraComponent; // 0x0
        TArray<FAnimatedLightExtraParameter> ParameterList; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddAnimatedLightNiagaraParameters params{};
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    params.ParameterList = (TArray<FAnimatedLightExtraParameter>)ParameterList;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::RemoveAnimatedLightMaterialParameter(FName Parameter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.RemoveAnimatedLightMaterialParameter"));
    struct Params_RemoveAnimatedLightMaterialParameter {
        FName Parameter; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveAnimatedLightMaterialParameter params{};
    params.Parameter = (FName)Parameter;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::AddAnimatedLightMaterialParameters(UMaterialInstanceDynamic* MaterialInstanceDynamic, TArray<FAnimatedLightExtraParameter> ParameterList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightMaterialParameters"));
    struct Params_AddAnimatedLightMaterialParameters {
        UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x0
        TArray<FAnimatedLightExtraParameter> ParameterList; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddAnimatedLightMaterialParameters params{};
    params.MaterialInstanceDynamic = (UMaterialInstanceDynamic*)MaterialInstanceDynamic;
    params.ParameterList = (TArray<FAnimatedLightExtraParameter>)ParameterList;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::AddAnimatedLightNiagaraParameter(UNiagaraComponent* NiagaraComponent, FAnimatedLightExtraParameter Parameter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightNiagaraParameter"));
    struct Params_AddAnimatedLightNiagaraParameter {
        UNiagaraComponent* NiagaraComponent; // 0x0
        FAnimatedLightExtraParameter Parameter; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddAnimatedLightNiagaraParameter params{};
    params.NiagaraComponent = (UNiagaraComponent*)NiagaraComponent;
    params.Parameter = (FAnimatedLightExtraParameter)Parameter;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightParametersComponent::AddAnimatedLightMaterialParameter(UMaterialInstanceDynamic* MaterialInstanceDynamic, FAnimatedLightExtraParameter Parameter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightParametersComponent.AddAnimatedLightMaterialParameter"));
    struct Params_AddAnimatedLightMaterialParameter {
        UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x0
        FAnimatedLightExtraParameter Parameter; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddAnimatedLightMaterialParameter params{};
    params.MaterialInstanceDynamic = (UMaterialInstanceDynamic*)MaterialInstanceDynamic;
    params.Parameter = (FAnimatedLightExtraParameter)Parameter;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
