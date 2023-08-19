#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x50];
    static UAchievementWriteCallbackProxy* StaticClass();
    static UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag);
}; // Size: 0x80
#pragma pack(pop)
