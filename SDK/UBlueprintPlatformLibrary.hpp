#pragma once
#include <cstdint>
#include "EScreenOrientation\Type.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FDateTime;
#pragma pack(push, 1)
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary {
public:
    static UBlueprintPlatformLibrary* StaticClass();
    static void ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow);
    static void ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, FString ActivationEvent);
    static int32_t ScheduleLocalNotificationBadgeAtTime(FDateTime& FireDateTime, bool LocalTime, FString ActivationEvent);
    static void ScheduleLocalNotificationAtTime(FDateTime& FireDateTime, bool LocalTime);
    static void GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32_t& FireDate);
    static EScreenOrientation::Type GetDeviceOrientation();
    static void ClearAllLocalNotifications();
    static void CancelLocalNotificationById(int32_t NotificationId);
    static void CancelLocalNotification(FString ActivationEvent);
}; // Size: 0x28
#pragma pack(pop)
