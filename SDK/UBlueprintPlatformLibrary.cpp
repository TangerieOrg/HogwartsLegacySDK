#include "EScreenOrientation\Type.hpp"
#include "FDateTime.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UBlueprintPlatformLibrary.hpp"
#include "UFunction.hpp"
UBlueprintPlatformLibrary* UBlueprintPlatformLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlueprintPlatformLibrary");
    return (UBlueprintPlatformLibrary*)res;
}
int32_t UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeAtTime(FDateTime& FireDateTime, bool LocalTime, FString ActivationEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeAtTime"));
    struct Params_ScheduleLocalNotificationBadgeAtTime {
        FDateTime FireDateTime; // 0x0
        bool LocalTime; // 0x8
        char pad_9[0x7];
        FString ActivationEvent; // 0x10
        int32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_ScheduleLocalNotificationBadgeAtTime params{};
    params.FireDateTime = (FDateTime)FireDateTime;
    params.LocalTime = (bool)LocalTime;
    params.ActivationEvent = (FString)ActivationEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FireDateTime = params.FireDateTime;
    return (int32_t)params.ReturnValue;
}
void UBlueprintPlatformLibrary::ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow) {}
EScreenOrientation::Type UBlueprintPlatformLibrary::GetDeviceOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPlatformLibrary.GetDeviceOrientation"));
    struct Params_GetDeviceOrientation {
        EScreenOrientation::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDeviceOrientation params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EScreenOrientation::Type)params.ReturnValue;
}
void UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, FString ActivationEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeFromNow"));
    struct Params_ScheduleLocalNotificationBadgeFromNow {
        int32_t inSecondsFromNow; // 0x0
        char pad_4[0x4];
        FString ActivationEvent; // 0x8
    }; // Size: 0x18
    Params_ScheduleLocalNotificationBadgeFromNow params{};
    params.inSecondsFromNow = (int32_t)inSecondsFromNow;
    params.ActivationEvent = (FString)ActivationEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBlueprintPlatformLibrary::ScheduleLocalNotificationAtTime(FDateTime& FireDateTime, bool LocalTime) {}
void UBlueprintPlatformLibrary::ClearAllLocalNotifications() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPlatformLibrary.ClearAllLocalNotifications"));
    struct Params_ClearAllLocalNotifications {
    }; // Size: 0x0
    Params_ClearAllLocalNotifications params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBlueprintPlatformLibrary::GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32_t& FireDate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPlatformLibrary.GetLaunchNotification"));
    struct Params_GetLaunchNotification {
        bool NotificationLaunchedApp; // 0x0
        char pad_1[0x7];
        FString ActivationEvent; // 0x8
        int32_t FireDate; // 0x18
    }; // Size: 0x1c
    Params_GetLaunchNotification params{};
    params.NotificationLaunchedApp = (bool)NotificationLaunchedApp;
    params.ActivationEvent = (FString)ActivationEvent;
    params.FireDate = (int32_t)FireDate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActivationEvent = params.ActivationEvent;
    NotificationLaunchedApp = params.NotificationLaunchedApp;
    FireDate = params.FireDate;
}
void UBlueprintPlatformLibrary::CancelLocalNotificationById(int32_t NotificationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPlatformLibrary.CancelLocalNotificationById"));
    struct Params_CancelLocalNotificationById {
        int32_t NotificationId; // 0x0
    }; // Size: 0x4
    Params_CancelLocalNotificationById params{};
    params.NotificationId = (int32_t)NotificationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBlueprintPlatformLibrary::CancelLocalNotification(FString ActivationEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintPlatformLibrary.CancelLocalNotification"));
    struct Params_CancelLocalNotification {
        FString ActivationEvent; // 0x0
    }; // Size: 0x10
    Params_CancelLocalNotification params{};
    params.ActivationEvent = (FString)ActivationEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
