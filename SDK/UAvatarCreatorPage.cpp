#include "UAvatarCreatorPage.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
void UAvatarCreatorPage::SetPlayerVoicePitch(int32_t PlayerVoicePitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarCreatorPage.SetPlayerVoicePitch"));
    struct Params_SetPlayerVoicePitch {
        int32_t PlayerVoicePitch; // 0x0
    }; // Size: 0x4
    Params_SetPlayerVoicePitch params{};
    params.PlayerVoicePitch = (int32_t)PlayerVoicePitch;
    ProcessEvent(func, &params);
}
UAvatarCreatorPage* UAvatarCreatorPage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvatarCreatorPage");
    return (UAvatarCreatorPage*)res;
}
int32_t UAvatarCreatorPage::GetPlayerVoicePitch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarCreatorPage.GetPlayerVoicePitch"));
    struct Params_GetPlayerVoicePitch {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerVoicePitch params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
