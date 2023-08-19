#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlayerTemplate.hpp"
UPlayerTemplate* UPlayerTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerTemplate");
    return (UPlayerTemplate*)res;
}
void UPlayerTemplate::RemovePlayerTemplate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerTemplate.RemovePlayerTemplate"));
    struct Params_RemovePlayerTemplate {
    }; // Size: 0x0
    Params_RemovePlayerTemplate params{};
    ProcessEvent(func, &params);
}
void UPlayerTemplate::PlayerTemplateLogObjInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerTemplate.PlayerTemplateLogObjInfo"));
    struct Params_PlayerTemplateLogObjInfo {
    }; // Size: 0x0
    Params_PlayerTemplateLogObjInfo params{};
    ProcessEvent(func, &params);
}
void UPlayerTemplate::ReloadPlayerTemplate(FName PlayerTemplateName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerTemplate.ReloadPlayerTemplate"));
    struct Params_ReloadPlayerTemplate {
        FName PlayerTemplateName; // 0x0
    }; // Size: 0x8
    Params_ReloadPlayerTemplate params{};
    params.PlayerTemplateName = (FName)PlayerTemplateName;
    ProcessEvent(func, &params);
}
UPlayerTemplate* UPlayerTemplate::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerTemplate.Get"));
    struct Params_Get {
        UPlayerTemplate* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPlayerTemplate*)params.ReturnValue;
}
void UPlayerTemplate::PlayerTemplateBuildCSVInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerTemplate.PlayerTemplateBuildCSVInfo"));
    struct Params_PlayerTemplateBuildCSVInfo {
    }; // Size: 0x0
    Params_PlayerTemplateBuildCSVInfo params{};
    ProcessEvent(func, &params);
}
