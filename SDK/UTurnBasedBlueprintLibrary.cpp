#include "APlayerController.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTurnBasedBlueprintLibrary.hpp"
UTurnBasedBlueprintLibrary* UTurnBasedBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
    return (UTurnBasedBlueprintLibrary*)res;
}
void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName"));
    struct Params_GetPlayerDisplayName {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        FString MatchID; // 0x10
        int32_t PlayerIndex; // 0x20
        char pad_24[0x4];
        FString PlayerDisplayName; // 0x28
    }; // Size: 0x38
    Params_GetPlayerDisplayName params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.MatchID = (FString)MatchID;
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.PlayerDisplayName = (FString)PlayerDisplayName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PlayerDisplayName = params.PlayerDisplayName;
}
void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject"));
    struct Params_RegisterTurnBasedMatchInterfaceObject {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        UObject* Object; // 0x10
    }; // Size: 0x18
    Params_RegisterTurnBasedMatchInterfaceObject params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTurnBasedBlueprintLibrary::GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn"));
    struct Params_GetIsMyTurn {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        FString MatchID; // 0x10
        bool bIsMyTurn; // 0x20
    }; // Size: 0x21
    Params_GetIsMyTurn params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.MatchID = (FString)MatchID;
    params.bIsMyTurn = (bool)bIsMyTurn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsMyTurn = params.bIsMyTurn;
}
void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex"));
    struct Params_GetMyPlayerIndex {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        FString MatchID; // 0x10
        int32_t PlayerIndex; // 0x20
    }; // Size: 0x24
    Params_GetMyPlayerIndex params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.MatchID = (FString)MatchID;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PlayerIndex = params.PlayerIndex;
}
