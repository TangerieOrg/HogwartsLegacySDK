#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class APlayerController;
#pragma pack(push, 1)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static ULeaderboardBlueprintLibrary* StaticClass();
    static bool WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32_t StatValue);
}; // Size: 0x28
#pragma pack(pop)
