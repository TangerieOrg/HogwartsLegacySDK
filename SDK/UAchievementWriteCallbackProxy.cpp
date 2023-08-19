#include "APlayerController.hpp"
#include "UAchievementWriteCallbackProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress"));
    struct Params_WriteAchievementProgress {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        FName AchievementName; // 0x10
        float Progress; // 0x18
        int32_t UserTag; // 0x1c
        UAchievementWriteCallbackProxy* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_WriteAchievementProgress params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.AchievementName = (FName)AchievementName;
    params.Progress = (float)Progress;
    params.UserTag = (int32_t)UserTag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAchievementWriteCallbackProxy*)params.ReturnValue;
}
UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy");
    return (UAchievementWriteCallbackProxy*)res;
}
