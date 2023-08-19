#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UAchievementBlueprintLibrary* StaticClass();
    static void GetCachedAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress);
    static void GetCachedAchievementDescription(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID);
}; // Size: 0x28
#pragma pack(pop)
