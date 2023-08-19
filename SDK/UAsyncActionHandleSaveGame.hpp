#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class USaveGame;
class UObject;
#pragma pack(push, 1)
class UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x30];
    USaveGame* SaveGameObject; // 0x60
    static UAsyncActionHandleSaveGame* StaticClass();
    static UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* SaveGameObject, FString SlotName, int32_t UserIndex);
    static UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(UObject* WorldContextObject, FString SlotName, int32_t UserIndex);
}; // Size: 0x68
#pragma pack(pop)
