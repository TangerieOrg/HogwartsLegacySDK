#include "ABP_RiverVolume_C.hpp"
#include "ARiverVolume.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "UFunction.hpp"
ABP_RiverVolume_C* ABP_RiverVolume_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_RiverVolume.BP_RiverVolume_C");
    return (ABP_RiverVolume_C*)res;
}
void ABP_RiverVolume_C::UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, EDrawDebugTrace::Type Temp_byte_Variable, EDrawDebugTrace::Type Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, EDrawDebugTrace::Type K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_RiverVolume.BP_RiverVolume_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool Temp_bool_Variable; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        EDrawDebugTrace::Type Temp_byte_Variable; // 0x2
        EDrawDebugTrace::Type Temp_byte_Variable_1; // 0x3
        bool CallFunc_IsValid_ReturnValue_1; // 0x4
        EDrawDebugTrace::Type K2Node_Select_Default; // 0x5
    }; // Size: 0x6
    Params_UserConstructionScript params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_byte_Variable = (EDrawDebugTrace::Type)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (EDrawDebugTrace::Type)Temp_byte_Variable_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.K2Node_Select_Default = (EDrawDebugTrace::Type)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
