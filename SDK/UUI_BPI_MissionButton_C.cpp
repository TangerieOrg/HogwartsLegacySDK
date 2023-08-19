#include "FMissionLogData.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_MissionButton_C.hpp"
#include "UUserWidget.hpp"
UUI_BPI_MissionButton_C* UUI_BPI_MissionButton_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/UIInterfaces/UI_BPI_MissionButton.UI_BPI_MissionButton_C");
    return (UUI_BPI_MissionButton_C*)res;
}
void UUI_BPI_MissionButton_C::I_GetMissionData(FMissionLogData& MissionData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_MissionButton.UI_BPI_MissionButton_C.I_GetMissionData"));
    struct Params_I_GetMissionData {
        FMissionLogData MissionData; // 0x0
    }; // Size: 0xa8
    Params_I_GetMissionData params{};
    params.MissionData = (FMissionLogData)MissionData;
    ProcessEvent(func, &params);
    MissionData = params.MissionData;
}
void UUI_BPI_MissionButton_C::I_SetMissionData(FMissionLogData MissionData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_MissionButton.UI_BPI_MissionButton_C.I_SetMissionData"));
    struct Params_I_SetMissionData {
        FMissionLogData MissionData; // 0x0
    }; // Size: 0xa8
    Params_I_SetMissionData params{};
    params.MissionData = (FMissionLogData)MissionData;
    ProcessEvent(func, &params);
}
void UUI_BPI_MissionButton_C::I_SetOwner(UUserWidget* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_MissionButton.UI_BPI_MissionButton_C.I_SetOwner"));
    struct Params_I_SetOwner {
        UUserWidget* Owner; // 0x0
    }; // Size: 0x8
    Params_I_SetOwner params{};
    params.Owner = (UUserWidget*)Owner;
    ProcessEvent(func, &params);
}
void UUI_BPI_MissionButton_C::I_SetMissionFocus(bool IsFocus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_MissionButton.UI_BPI_MissionButton_C.I_SetMissionFocus"));
    struct Params_I_SetMissionFocus {
        bool IsFocus; // 0x0
    }; // Size: 0x1
    Params_I_SetMissionFocus params{};
    params.IsFocus = (bool)IsFocus;
    ProcessEvent(func, &params);
}
