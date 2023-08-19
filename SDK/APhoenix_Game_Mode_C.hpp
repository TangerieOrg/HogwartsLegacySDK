#pragma once
#include <cstdint>
#include "APhoenixGameMode.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class UModLoaderManager_C;
class UFloatingModMenu_C;
#pragma pack(push, 1)
class APhoenix_Game_Mode_C : public APhoenixGameMode {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x380
    USceneComponent* DefaultSceneRoot; // 0x388
    UModLoaderManager_C* ModLoaderManager; // 0x390
    static APhoenix_Game_Mode_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Phoenix_Game_Mode(int32_t EntryPoint, UModLoaderManager_C* CallFunc_Create_ReturnValue, TArray<UFloatingModMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, UFloatingModMenu_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, UFloatingModMenu_C* CallFunc_Create_ReturnValue_1, TArray<UModLoaderManager_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, UModLoaderManager_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x398
#pragma pack(pop)
