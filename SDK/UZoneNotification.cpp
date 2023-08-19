#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UZoneNotification.hpp"
UZoneNotification* UZoneNotification::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ZoneNotification");
    return (UZoneNotification*)res;
}
void UZoneNotification::Notify(FName Header_Name, FName Label_Name, FName Image_Left, FName Image_Right, float duration_seconds, bool PlaySound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ZoneNotification.Notify"));
    struct Params_Notify {
        FName Header_Name; // 0x0
        FName Label_Name; // 0x8
        FName Image_Left; // 0x10
        FName Image_Right; // 0x18
        float duration_seconds; // 0x20
        bool PlaySound; // 0x24
    }; // Size: 0x25
    Params_Notify params{};
    params.Header_Name = (FName)Header_Name;
    params.Label_Name = (FName)Label_Name;
    params.Image_Left = (FName)Image_Left;
    params.Image_Right = (FName)Image_Right;
    params.duration_seconds = (float)duration_seconds;
    params.PlaySound = (bool)PlaySound;
    ProcessEvent(func, &params);
}
void UZoneNotification::HideNotificationBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ZoneNotification.HideNotificationBP"));
    struct Params_HideNotificationBP {
    }; // Size: 0x0
    Params_HideNotificationBP params{};
    ProcessEvent(func, &params);
}
void UZoneNotification::DisplayNotificationBP(bool PlaySound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ZoneNotification.DisplayNotificationBP"));
    struct Params_DisplayNotificationBP {
        bool PlaySound; // 0x0
    }; // Size: 0x1
    Params_DisplayNotificationBP params{};
    params.PlaySound = (bool)PlaySound;
    ProcessEvent(func, &params);
}
