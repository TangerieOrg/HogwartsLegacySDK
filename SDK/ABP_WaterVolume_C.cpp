#include "ABP_WaterVolume_C.hpp"
#include "AWaterVolume.hpp"
#include "UFunction.hpp"
void ABP_WaterVolume_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_WaterVolume.BP_WaterVolume_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue_1; // 0x1
    }; // Size: 0x2
    Params_UserConstructionScript params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
ABP_WaterVolume_C* ABP_WaterVolume_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_WaterVolume.BP_WaterVolume_C");
    return (ABP_WaterVolume_C*)res;
}
