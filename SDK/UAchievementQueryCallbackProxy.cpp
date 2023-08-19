#include "APlayerController.hpp"
#include "UAchievementQueryCallbackProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy");
    return (UAchievementQueryCallbackProxy*)res;
}
UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements"));
    struct Params_CacheAchievements {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        UAchievementQueryCallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CacheAchievements params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAchievementQueryCallbackProxy*)params.ReturnValue;
}
UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions"));
    struct Params_CacheAchievementDescriptions {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        UAchievementQueryCallbackProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CacheAchievementDescriptions params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAchievementQueryCallbackProxy*)params.ReturnValue;
}
