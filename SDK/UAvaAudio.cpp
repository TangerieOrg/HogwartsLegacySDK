#include "UAvaAudio.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAvaAudio::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudio.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
UAvaAudio* UAvaAudio::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaAudio");
    return (UAvaAudio*)res;
}
void UAvaAudio::OnCurtainLowered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudio.OnCurtainLowered"));
    struct Params_OnCurtainLowered {
    }; // Size: 0x0
    Params_OnCurtainLowered params{};
    ProcessEvent(func, &params);
}
void UAvaAudio::SetPlayerVoicePitch(int32_t PlayerVoicePitch, bool WriteToSave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudio.SetPlayerVoicePitch"));
    struct Params_SetPlayerVoicePitch {
        int32_t PlayerVoicePitch; // 0x0
        bool WriteToSave; // 0x4
    }; // Size: 0x5
    Params_SetPlayerVoicePitch params{};
    params.PlayerVoicePitch = (int32_t)PlayerVoicePitch;
    params.WriteToSave = (bool)WriteToSave;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudio::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudio.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
int32_t UAvaAudio::GetPlayerVoicePitch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudio.GetPlayerVoicePitch"));
    struct Params_GetPlayerVoicePitch {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerVoicePitch params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAvaAudio::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudio.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
