#pragma once
#include <cstdint>
#include "FLegendItemData.hpp"
#include "UScreen.hpp"
#pragma pack(push, 1)
class UFrontEnd_MenuWidget : public UScreen {
public:
    TArray<FName> LevelNames; // 0x370
    static UFrontEnd_MenuWidget* StaticClass();
    void SetMenuLegend(TArray<FLegendItemData>& LegendArray);
    bool ExecuteLoad(FString Filename, int32_t CharacterID);
}; // Size: 0x380
#pragma pack(pop)
