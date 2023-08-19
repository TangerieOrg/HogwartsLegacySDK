#include "ABP_Dungeon_WaterVolume_C.hpp"
#include "ADungeonWaterVolume.hpp"
#include "UFunction.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
ABP_Dungeon_WaterVolume_C* ABP_Dungeon_WaterVolume_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_Dungeon_WaterVolume.BP_Dungeon_WaterVolume_C");
    return (ABP_Dungeon_WaterVolume_C*)res;
}
void ABP_Dungeon_WaterVolume_C::UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, FName Temp_name_Variable, FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, UPhoenixPhysicalMaterial* K2Node_Select_Default, FName K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Dungeon_WaterVolume.BP_Dungeon_WaterVolume_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool Temp_bool_Variable; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        char pad_2[0x2];
        FName Temp_name_Variable; // 0x4
        FName Temp_name_Variable_1; // 0xc
        bool CallFunc_IsValid_ReturnValue_1; // 0x14
        bool CallFunc_IsValid_ReturnValue_2; // 0x15
        bool CallFunc_IsValid_ReturnValue_3; // 0x16
        bool Temp_bool_Variable_1; // 0x17
        bool CallFunc_BooleanOR_ReturnValue; // 0x18
        char pad_19[0x7];
        UPhoenixPhysicalMaterial* K2Node_Select_Default; // 0x20
        FName K2Node_Select_Default_1; // 0x28
    }; // Size: 0x30
    Params_UserConstructionScript params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.Temp_name_Variable_1 = (FName)Temp_name_Variable_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_Select_Default = (UPhoenixPhysicalMaterial*)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FName)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
