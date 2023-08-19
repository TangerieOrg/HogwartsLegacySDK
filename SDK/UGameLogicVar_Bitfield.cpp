#include "FBitfield256.hpp"
#include "UFunction.hpp"
#include "UGameLogicBase.hpp"
#include "UGameLogicVar_Bitfield.hpp"
UGameLogicVar_Bitfield* UGameLogicVar_Bitfield::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicVar_Bitfield");
    return (UGameLogicVar_Bitfield*)res;
}
void UGameLogicVar_Bitfield::SetCachedValue(FBitfield256 Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Bitfield.SetCachedValue"));
    struct Params_SetCachedValue {
        FBitfield256 Value; // 0x0
    }; // Size: 0x20
    Params_SetCachedValue params{};
    params.Value = (FBitfield256)Value;
    ProcessEvent(func, &params);
}
FBitfield256 UGameLogicVar_Bitfield::GetCachedValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Bitfield.GetCachedValue"));
    struct Params_GetCachedValue {
        FBitfield256 ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetCachedValue params{};
    ProcessEvent(func, &params);
    return (FBitfield256)params.ReturnValue;
}
