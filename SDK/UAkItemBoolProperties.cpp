#include "UAkItemBoolProperties.hpp"
#include "UFunction.hpp"
#include "UWidget.hpp"
UAkItemBoolProperties* UAkItemBoolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkItemBoolProperties");
    return (UAkItemBoolProperties*)res;
}
void UAkItemBoolProperties::SetSearchText(FString newText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemBoolProperties.SetSearchText"));
    struct Params_SetSearchText {
        FString newText; // 0x0
    }; // Size: 0x10
    Params_SetSearchText params{};
    params.newText = (FString)newText;
    ProcessEvent(func, &params);
}
FString UAkItemBoolProperties::GetSelectedProperty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty"));
    struct Params_GetSelectedProperty {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSelectedProperty params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UAkItemBoolProperties::GetSearchText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemBoolProperties.GetSearchText"));
    struct Params_GetSearchText {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSearchText params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
