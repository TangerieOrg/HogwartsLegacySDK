#include "AActor.hpp"
#include "AWorldBaseHeightBase.hpp"
#include "FBlendDomain.hpp"
#include "UFunction.hpp"
AWorldBaseHeightBase* AWorldBaseHeightBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.WorldBaseHeightBase");
    return (AWorldBaseHeightBase*)res;
}
void AWorldBaseHeightBase::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.WorldBaseHeightBase.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
