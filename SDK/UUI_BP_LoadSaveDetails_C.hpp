#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UUI_BP_FG_DetailsPanelBack_C;
#pragma pack(push, 1)
class UUI_BP_LoadSaveDetails_C : public UUserWidget {
public:
    UPhoenixTextBlock* PlayTime; // 0x268
    UPhoenixTextBlock* SaveTime; // 0x270
    UPhoenixTextBlock* SaveTitle; // 0x278
    UPhoenixTextBlock* SaveType; // 0x280
    UUI_BP_FG_DetailsPanelBack_C* UI_BP_FG_DetailsPanelBack; // 0x288
    static UUI_BP_LoadSaveDetails_C* StaticClass();
    void Set_Details_Data(FString SaveImage, FString SaveName, FString SaveType, FString SaveDate, FString TimePlayed);
}; // Size: 0x290
#pragma pack(pop)
