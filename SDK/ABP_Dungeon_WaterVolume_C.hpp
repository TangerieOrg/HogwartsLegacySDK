#pragma once
#include <cstdint>
#include "ADungeonWaterVolume.hpp"
class UPhoenixPhysicalMaterial;
#pragma pack(push, 1)
class ABP_Dungeon_WaterVolume_C : public ADungeonWaterVolume {
public:
    static ABP_Dungeon_WaterVolume_C* StaticClass();
    void UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, FName Temp_name_Variable, FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, UPhoenixPhysicalMaterial* K2Node_Select_Default, FName K2Node_Select_Default_1);
}; // Size: 0x4d0
#pragma pack(pop)
