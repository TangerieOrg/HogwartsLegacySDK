#pragma once
#include <cstdint>
#include "FSaveGameInfo.hpp"
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class USaveGameWidget : public UPhoenixUserWidget {
public:
    char pad_328[0x10];
    static USaveGameWidget* StaticClass();
    bool SaveGameInSlot(int32_t SaveSlot);
    void RefreshListAfterSaveFailed();
    void RefreshListAfterSave(TArray<FSaveGameInfo>& SaveData);
    static int32_t ParseSlotNumFromName(FString SlotName);
    void OnSaveGameFailed();
    void OnAsyncSaveCompleted();
    void GetUserSavesBySlot(TArray<FSaveGameInfo>& SaveData);
    bool DeleteGameFromSlot(int32_t SaveSlot);
}; // Size: 0x338
#pragma pack(pop)
