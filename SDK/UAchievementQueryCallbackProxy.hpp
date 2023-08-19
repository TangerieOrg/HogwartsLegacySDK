#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x38];
    static UAchievementQueryCallbackProxy* StaticClass();
    static UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController);
    static UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController);
}; // Size: 0x68
#pragma pack(pop)
