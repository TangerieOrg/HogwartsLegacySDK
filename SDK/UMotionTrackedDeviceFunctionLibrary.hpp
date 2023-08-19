#pragma once
#include <cstdint>
#include "EControllerHand.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UMotionControllerComponent;
#pragma pack(push, 1)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UMotionTrackedDeviceFunctionLibrary* StaticClass();
    static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
    static bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName);
    static bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand);
    static bool IsMotionTrackingEnabledForComponent(UMotionControllerComponent* MotionControllerComponent);
    static bool IsMotionTrackedDeviceCountManagementNecessary();
    static bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName);
    static int32_t GetMotionTrackingEnabledControllerCount();
    static int32_t GetMaximumMotionTrackedControllerCount();
    static FName GetActiveTrackingSystemName();
    static TArray<FName> EnumerateMotionSources();
    static bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);
    static bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);
    static bool EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);
    static void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);
    static void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);
    static void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);
    static void DisableMotionTrackingOfAllControllers();
    static void DisableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);
}; // Size: 0x28
#pragma pack(pop)
