#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class ABP_OL_Chest_VP_Marker_C;
class UObject;
class UMapSubSystem;
class UBeaconInfo;
#pragma pack(push, 1)
class UFL_BeaconCheck_C : public UBlueprintFunctionLibrary {
public:
    static UFL_BeaconCheck_C* StaticClass();
    static void BeaconCheck(ABP_OL_Chest_VP_Marker_C* Beacon, UObject* __WorldContext, bool& IsComplete, bool Complete, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UBeaconInfo* CallFunc_GetMapBeaconFromName_ReturnValue, FString CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x28
#pragma pack(pop)
