#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UTurnBasedBlueprintLibrary* StaticClass();
    static void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object);
    static void GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName);
    static void GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex);
    static void GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn);
}; // Size: 0x28
#pragma pack(pop)
