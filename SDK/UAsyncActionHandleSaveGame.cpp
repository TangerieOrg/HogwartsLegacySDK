#include "UAsyncActionHandleSaveGame.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USaveGame.hpp"
UAsyncActionHandleSaveGame* UAsyncActionHandleSaveGame::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AsyncActionHandleSaveGame");
    return (UAsyncActionHandleSaveGame*)res;
}
UAsyncActionHandleSaveGame* UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* SaveGameObject, FString SlotName, int32_t UserIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionHandleSaveGame.AsyncSaveGameToSlot"));
    struct Params_AsyncSaveGameToSlot {
        UObject* WorldContextObject; // 0x0
        USaveGame* SaveGameObject; // 0x8
        FString SlotName; // 0x10
        int32_t UserIndex; // 0x20
        char pad_24[0x4];
        UAsyncActionHandleSaveGame* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AsyncSaveGameToSlot params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SaveGameObject = (USaveGame*)SaveGameObject;
    params.SlotName = (FString)SlotName;
    params.UserIndex = (int32_t)UserIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAsyncActionHandleSaveGame*)params.ReturnValue;
}
UAsyncActionHandleSaveGame* UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(UObject* WorldContextObject, FString SlotName, int32_t UserIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AsyncActionHandleSaveGame.AsyncLoadGameFromSlot"));
    struct Params_AsyncLoadGameFromSlot {
        UObject* WorldContextObject; // 0x0
        FString SlotName; // 0x8
        int32_t UserIndex; // 0x18
        char pad_1c[0x4];
        UAsyncActionHandleSaveGame* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_AsyncLoadGameFromSlot params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SlotName = (FString)SlotName;
    params.UserIndex = (int32_t)UserIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAsyncActionHandleSaveGame*)params.ReturnValue;
}
