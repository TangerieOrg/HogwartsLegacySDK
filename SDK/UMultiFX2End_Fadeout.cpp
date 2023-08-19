#include "FMultiFX2Handle.hpp"
#include "UFXEnd.hpp"
#include "UFunction.hpp"
#include "UMultiFX2End_Fadeout.hpp"
#include "UMultiFX2_Base.hpp"
UMultiFX2End_Fadeout* UMultiFX2End_Fadeout::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2End_Fadeout");
    return (UMultiFX2End_Fadeout*)res;
}
void UMultiFX2End_Fadeout::EndFade(FMultiFX2Handle InHandle, UMultiFX2_Base* FXBase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MultiFX2End_Fadeout.EndFade"));
    struct Params_EndFade {
        FMultiFX2Handle InHandle; // 0x0
        UMultiFX2_Base* FXBase; // 0x8
    }; // Size: 0x10
    Params_EndFade params{};
    params.InHandle = (FMultiFX2Handle)InHandle;
    params.FXBase = (UMultiFX2_Base*)FXBase;
    ProcessEvent(func, &params);
}
