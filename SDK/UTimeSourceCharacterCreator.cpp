#include "FDateInput.hpp"
#include "UFunction.hpp"
#include "UTimeSourceCharacterCreator.hpp"
#include "UTimeSourceVolume.hpp"
UTimeSourceCharacterCreator* UTimeSourceCharacterCreator::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceCharacterCreator");
    return (UTimeSourceCharacterCreator*)res;
}
void UTimeSourceCharacterCreator::SetPreviewTime(float globalTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceCharacterCreator.SetPreviewTime"));
    struct Params_SetPreviewTime {
        float globalTime; // 0x0
    }; // Size: 0x4
    Params_SetPreviewTime params{};
    params.globalTime = (float)globalTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeSourceCharacterCreator::PreviewDisabled(bool& Disabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceCharacterCreator.PreviewDisabled"));
    struct Params_PreviewDisabled {
        bool Disabled; // 0x0
    }; // Size: 0x1
    Params_PreviewDisabled params{};
    params.Disabled = (bool)Disabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Disabled = params.Disabled;
}
void UTimeSourceCharacterCreator::DisablePreview() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceCharacterCreator.DisablePreview"));
    struct Params_DisablePreview {
    }; // Size: 0x0
    Params_DisablePreview params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeSourceCharacterCreator::GetPreviewTime(float& globalTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceCharacterCreator.GetPreviewTime"));
    struct Params_GetPreviewTime {
        float globalTime; // 0x0
    }; // Size: 0x4
    Params_GetPreviewTime params{};
    params.globalTime = (float)globalTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    globalTime = params.globalTime;
}
void UTimeSourceCharacterCreator::EditorForceUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceCharacterCreator.EditorForceUpdate"));
    struct Params_EditorForceUpdate {
    }; // Size: 0x0
    Params_EditorForceUpdate params{};
    ProcessEvent(func, &params);
}
