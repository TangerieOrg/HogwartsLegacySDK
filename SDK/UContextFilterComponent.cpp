#include "AActor.hpp"
#include "FInputContextWithType.hpp"
#include "FInputFilter.hpp"
#include "UContextFilterComponent.hpp"
#include "UFunction.hpp"
#include "UGameLogicComponent.hpp"
bool UContextFilterComponent::GetContextOnActor(AActor* InActor, FInputContextWithType Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.GetContextOnActor"));
    struct Params_GetContextOnActor {
        AActor* InActor; // 0x0
        FInputContextWithType Context; // 0x8
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetContextOnActor params{};
    params.InActor = (AActor*)InActor;
    params.Context = (FInputContextWithType)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UContextFilterComponent* UContextFilterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.ContextFilterComponent");
    return (UContextFilterComponent*)res;
}
void UContextFilterComponent::SetContextOnActor(AActor* InActor, FInputContextWithType Context, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.SetContextOnActor"));
    struct Params_SetContextOnActor {
        AActor* InActor; // 0x0
        FInputContextWithType Context; // 0x8
        bool bFlag; // 0x14
    }; // Size: 0x15
    Params_SetContextOnActor params{};
    params.InActor = (AActor*)InActor;
    params.Context = (FInputContextWithType)Context;
    params.bFlag = (bool)bFlag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UContextFilterComponent::SetContext(FInputContextWithType Context, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.SetContext"));
    struct Params_SetContext {
        FInputContextWithType Context; // 0x0
        bool bFlag; // 0xc
    }; // Size: 0xd
    Params_SetContext params{};
    params.Context = (FInputContextWithType)Context;
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void UContextFilterComponent::RemoveFilter(FInputFilter& InFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.RemoveFilter"));
    struct Params_RemoveFilter {
        FInputFilter InFilter; // 0x0
    }; // Size: 0x8
    Params_RemoveFilter params{};
    params.InFilter = (FInputFilter)InFilter;
    ProcessEvent(func, &params);
    InFilter = params.InFilter;
}
bool UContextFilterComponent::EvaluateFilter(FInputFilter& InFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.EvaluateFilter"));
    struct Params_EvaluateFilter {
        FInputFilter InFilter; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EvaluateFilter params{};
    params.InFilter = (FInputFilter)InFilter;
    ProcessEvent(func, &params);
    InFilter = params.InFilter;
    return (bool)params.ReturnValue;
}
bool UContextFilterComponent::GetContext(FInputContextWithType Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.GetContext"));
    struct Params_GetContext {
        FInputContextWithType Context; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetContext params{};
    params.Context = (FInputContextWithType)Context;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UContextFilterComponent::EvaluateFilterOnActor(AActor* InActor, FInputFilter InputFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.EvaluateFilterOnActor"));
    struct Params_EvaluateFilterOnActor {
        AActor* InActor; // 0x0
        FInputFilter InputFilter; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_EvaluateFilterOnActor params{};
    params.InActor = (AActor*)InActor;
    params.InputFilter = (FInputFilter)InputFilter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UContextFilterComponent::ClearContextOnActor(AActor* InActor, FInputContextWithType Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.ClearContextOnActor"));
    struct Params_ClearContextOnActor {
        AActor* InActor; // 0x0
        FInputContextWithType Context; // 0x8
    }; // Size: 0x14
    Params_ClearContextOnActor params{};
    params.InActor = (AActor*)InActor;
    params.Context = (FInputContextWithType)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UContextFilterComponent::ClearContext(FInputContextWithType Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.ClearContext"));
    struct Params_ClearContext {
        FInputContextWithType Context; // 0x0
    }; // Size: 0xc
    Params_ClearContext params{};
    params.Context = (FInputContextWithType)Context;
    ProcessEvent(func, &params);
}
void UContextFilterComponent::AddFilter(FInputFilter& InFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ContextFilterComponent.AddFilter"));
    struct Params_AddFilter {
        FInputFilter InFilter; // 0x0
    }; // Size: 0x8
    Params_AddFilter params{};
    params.InFilter = (FInputFilter)InFilter;
    ProcessEvent(func, &params);
    InFilter = params.InFilter;
}
