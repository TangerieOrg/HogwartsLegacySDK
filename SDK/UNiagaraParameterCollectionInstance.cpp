#include "FLinearColor.hpp"
#include "FNiagaraParameterStore.hpp"
#include "FNiagaraVariable.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UNiagaraParameterCollectionInstance.hpp"
#include "UObject.hpp"
void UNiagaraParameterCollectionInstance::SetVector2DParameter(FString InVariableName, FVector2D InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter"));
    struct Params_SetVector2DParameter {
        FString InVariableName; // 0x0
        FVector2D InValue; // 0x10
    }; // Size: 0x18
    Params_SetVector2DParameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FVector2D)InValue;
    ProcessEvent(func, &params);
}
UNiagaraParameterCollectionInstance* UNiagaraParameterCollectionInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraParameterCollectionInstance");
    return (UNiagaraParameterCollectionInstance*)res;
}
void UNiagaraParameterCollectionInstance::SetVectorParameter(FString InVariableName, FVector InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FString InVariableName; // 0x0
        FVector InValue; // 0x10
    }; // Size: 0x1c
    Params_SetVectorParameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FVector)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraParameterCollectionInstance::SetFloatParameter(FString InVariableName, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter"));
    struct Params_SetFloatParameter {
        FString InVariableName; // 0x0
        float InValue; // 0x10
    }; // Size: 0x14
    Params_SetFloatParameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraParameterCollectionInstance::SetVector4Parameter(FString InVariableName, FVector4& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter"));
    struct Params_SetVector4Parameter {
        FString InVariableName; // 0x0
        FVector4 InValue; // 0x10
    }; // Size: 0x20
    Params_SetVector4Parameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FVector4)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UNiagaraParameterCollectionInstance::SetColorParameter(FString InVariableName, FLinearColor InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter"));
    struct Params_SetColorParameter {
        FString InVariableName; // 0x0
        FLinearColor InValue; // 0x10
    }; // Size: 0x20
    Params_SetColorParameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraParameterCollectionInstance::SetQuatParameter(FString InVariableName, FQuat& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter"));
    struct Params_SetQuatParameter {
        FString InVariableName; // 0x0
        FQuat InValue; // 0x10
    }; // Size: 0x20
    Params_SetQuatParameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (FQuat)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UNiagaraParameterCollectionInstance::SetIntParameter(FString InVariableName, int32_t InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter"));
    struct Params_SetIntParameter {
        FString InVariableName; // 0x0
        int32_t InValue; // 0x10
    }; // Size: 0x14
    Params_SetIntParameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (int32_t)InValue;
    ProcessEvent(func, &params);
}
void UNiagaraParameterCollectionInstance::SetBoolParameter(FString InVariableName, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter"));
    struct Params_SetBoolParameter {
        FString InVariableName; // 0x0
        bool InValue; // 0x10
    }; // Size: 0x11
    Params_SetBoolParameter params{};
    params.InVariableName = (FString)InVariableName;
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter"));
    struct Params_GetVector4Parameter {
        FString InVariableName; // 0x0
        FVector4 ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetVector4Parameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (FVector4)params.ReturnValue;
}
FVector UNiagaraParameterCollectionInstance::GetVectorParameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter"));
    struct Params_GetVectorParameter {
        FString InVariableName; // 0x0
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_GetVectorParameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter"));
    struct Params_GetColorParameter {
        FString InVariableName; // 0x0
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetColorParameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter"));
    struct Params_GetVector2DParameter {
        FString InVariableName; // 0x0
        FVector2D ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetVector2DParameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
float UNiagaraParameterCollectionInstance::GetFloatParameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter"));
    struct Params_GetFloatParameter {
        FString InVariableName; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetFloatParameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter"));
    struct Params_GetQuatParameter {
        FString InVariableName; // 0x0
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetQuatParameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
int32_t UNiagaraParameterCollectionInstance::GetIntParameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter"));
    struct Params_GetIntParameter {
        FString InVariableName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetIntParameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UNiagaraParameterCollectionInstance::GetBoolParameter(FString InVariableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter"));
    struct Params_GetBoolParameter {
        FString InVariableName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetBoolParameter params{};
    params.InVariableName = (FString)InVariableName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
