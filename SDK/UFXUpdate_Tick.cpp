#include "FMultiFX2Handle.hpp"
#include "UFXUpdate.hpp"
#include "UFXUpdate_Tick.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
UFXUpdate_Tick* UFXUpdate_Tick::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_Tick");
    return (UFXUpdate_Tick*)res;
}
void UFXUpdate_Tick::Update(FMultiFX2Handle InHandle, UMultiFX2_Base* InMultiBase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXUpdate_Tick.Update"));
    struct Params_Update {
        FMultiFX2Handle InHandle; // 0x0
        UMultiFX2_Base* InMultiBase; // 0x8
    }; // Size: 0x10
    Params_Update params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    params.InMultiBase = (UMultiFX2_Base*)InMultiBase;
    ProcessEvent(func, &params);
}
