#include "APhoenixGameMode.hpp"
#include "APhoenix_Game_Mode_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFloatingModMenu_C.hpp"
#include "UFunction.hpp"
#include "UModLoaderManager_C.hpp"
#include "USceneComponent.hpp"
APhoenix_Game_Mode_C* APhoenix_Game_Mode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/GameMode/Phoenix_Game_Mode.Phoenix_Game_Mode_C");
    return (APhoenix_Game_Mode_C*)res;
}
void APhoenix_Game_Mode_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/GameMode/Phoenix_Game_Mode.Phoenix_Game_Mode_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void APhoenix_Game_Mode_C::ExecuteUbergraph_Phoenix_Game_Mode(int32_t EntryPoint, UModLoaderManager_C* CallFunc_Create_ReturnValue, TArray<UFloatingModMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, UFloatingModMenu_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, UFloatingModMenu_C* CallFunc_Create_ReturnValue_1, TArray<UModLoaderManager_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, UModLoaderManager_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/GameMode/Phoenix_Game_Mode.Phoenix_Game_Mode_C.ExecuteUbergraph_Phoenix_Game_Mode"));
    struct Params_ExecuteUbergraph_Phoenix_Game_Mode {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UModLoaderManager_C* CallFunc_Create_ReturnValue; // 0x8
        TArray<UFloatingModMenu_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets; // 0x10
        UFloatingModMenu_C* CallFunc_Array_Get_Item; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x7];
        UFloatingModMenu_C* CallFunc_Create_ReturnValue_1; // 0x30
        TArray<UModLoaderManager_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_1; // 0x38
        UModLoaderManager_C* CallFunc_Array_Get_Item_1; // 0x48
        bool CallFunc_IsValid_ReturnValue_1; // 0x50
    }; // Size: 0x51
    Params_ExecuteUbergraph_Phoenix_Game_Mode params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Create_ReturnValue = (UModLoaderManager_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_GetAllWidgetsOfClass_FoundWidgets = (TArray<UFloatingModMenu_C*>)CallFunc_GetAllWidgetsOfClass_FoundWidgets;
    params.CallFunc_Array_Get_Item = (UFloatingModMenu_C*)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Create_ReturnValue_1 = (UFloatingModMenu_C*)CallFunc_Create_ReturnValue_1;
    params.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = (TArray<UModLoaderManager_C*>)CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
    params.CallFunc_Array_Get_Item_1 = (UModLoaderManager_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetAllWidgetsOfClass_FoundWidgets = params.CallFunc_GetAllWidgetsOfClass_FoundWidgets;
    CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = params.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
}
