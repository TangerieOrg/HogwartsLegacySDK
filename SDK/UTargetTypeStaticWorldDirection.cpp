#include "FVector.hpp"
#include "UFunction.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeStaticWorldDirection.hpp"
UTargetTypeStaticWorldDirection* UTargetTypeStaticWorldDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TargetTypeStaticWorldDirection");
    return (UTargetTypeStaticWorldDirection*)res;
}
void UTargetTypeStaticWorldDirection::SetStaticWorldDirection(FVector InStaticWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeStaticWorldDirection.SetStaticWorldDirection"));
    struct Params_SetStaticWorldDirection {
        FVector InStaticWorldDirection; // 0x0
    }; // Size: 0xc
    Params_SetStaticWorldDirection params{};
    params.InStaticWorldDirection = (FVector)InStaticWorldDirection;
    ProcessEvent(func, &params);
}
