#include "UAkItemProperties.hpp"
#include "UFunction.hpp"
#include "UWidget.hpp"
UAkItemProperties* UAkItemProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkItemProperties");
    return (UAkItemProperties*)res;
}
void UAkItemProperties::SetSearchText(FString newText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemProperties.SetSearchText"));
    struct Params_SetSearchText {
        FString newText; // 0x0
    }; // Size: 0x10
    Params_SetSearchText params{};
    params.newText = (FString)newText;
    ProcessEvent(func, &params);
}
FString UAkItemProperties::GetSelectedProperty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemProperties.GetSelectedProperty"));
    struct Params_GetSelectedProperty {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSelectedProperty params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UAkItemProperties::GetSearchText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemProperties.GetSearchText"));
    struct Params_GetSearchText {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSearchText params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
