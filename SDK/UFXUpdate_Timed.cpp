#include "FMultiFX2Handle.hpp"
#include "UFXUpdate.hpp"
#include "UFXUpdate_Timed.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UWorld.hpp"
UFXUpdate_Timed* UFXUpdate_Timed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_Timed");
    return (UFXUpdate_Timed*)res;
}
void UFXUpdate_Timed::DeactivateFX(FMultiFX2Handle InHandle, UMultiFX2_Base* FXBase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXUpdate_Timed.DeactivateFX"));
    struct Params_DeactivateFX {
        FMultiFX2Handle InHandle; // 0x0
        UMultiFX2_Base* FXBase; // 0x8
    }; // Size: 0x10
    Params_DeactivateFX params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    params.FXBase = (UMultiFX2_Base*)FXBase;
    ProcessEvent(func, &params);
}
