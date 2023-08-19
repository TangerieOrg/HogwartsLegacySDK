#include "APlayerController.hpp"
#include "UAchievementBlueprintLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAchievementBlueprintLibrary* UAchievementBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary");
    return (UAchievementBlueprintLibrary*)res;
}
void UAchievementBlueprintLibrary::GetCachedAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress"));
    struct Params_GetCachedAchievementProgress {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        FName AchievementID; // 0x10
        bool bFoundID; // 0x18
        char pad_19[0x3];
        float Progress; // 0x1c
    }; // Size: 0x20
    Params_GetCachedAchievementProgress params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.AchievementID = (FName)AchievementID;
    params.bFoundID = (bool)bFoundID;
    params.Progress = (float)Progress;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFoundID = params.bFoundID;
    Progress = params.Progress;
}
void UAchievementBlueprintLibrary::GetCachedAchievementDescription(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID) {}
