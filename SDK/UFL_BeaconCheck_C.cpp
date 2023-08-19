#include "ABP_OL_Chest_VP_Marker_C.hpp"
#include "UBeaconInfo.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFL_BeaconCheck_C.hpp"
#include "UFunction.hpp"
#include "UMapSubSystem.hpp"
#include "UObject.hpp"
UFL_BeaconCheck_C* UFL_BeaconCheck_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/FunctionLibrary/FL_BeaconCheck.FL_BeaconCheck_C");
    return (UFL_BeaconCheck_C*)res;
}
void UFL_BeaconCheck_C::BeaconCheck(ABP_OL_Chest_VP_Marker_C* Beacon, UObject* __WorldContext, bool& IsComplete, bool Complete, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UBeaconInfo* CallFunc_GetMapBeaconFromName_ReturnValue, FString CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/FunctionLibrary/FL_BeaconCheck.FL_BeaconCheck_C.BeaconCheck"));
    struct Params_BeaconCheck {
        ABP_OL_Chest_VP_Marker_C* Beacon; // 0x0
        UObject* __WorldContext; // 0x8
        bool IsComplete; // 0x10
        bool Complete; // 0x11
        char pad_12[0x6];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
        char pad_21[0x7];
        UBeaconInfo* CallFunc_GetMapBeaconFromName_ReturnValue; // 0x28
        FString CallFunc_Conv_BoolToString_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x40
        bool CallFunc_IsValid_ReturnValue_1; // 0x41
    }; // Size: 0x42
    Params_BeaconCheck params{};
    params.Beacon = (ABP_OL_Chest_VP_Marker_C*)Beacon;
    params.__WorldContext = (UObject*)__WorldContext;
    params.IsComplete = (bool)IsComplete;
    params.Complete = (bool)Complete;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetMapBeaconFromName_ReturnValue = (UBeaconInfo*)CallFunc_GetMapBeaconFromName_ReturnValue;
    params.CallFunc_Conv_BoolToString_ReturnValue = (FString)CallFunc_Conv_BoolToString_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IsComplete = params.IsComplete;
}
