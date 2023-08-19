#include "FAnimNotifyEvent.hpp"
#include "FRawCurveTracks.hpp"
#include "UAnimSequenceBase.hpp"
#include "UAnimationAsset.hpp"
#include "UFunction.hpp"
UAnimSequenceBase* UAnimSequenceBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimSequenceBase");
    return (UAnimSequenceBase*)res;
}
float UAnimSequenceBase::GetPlayLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSequenceBase.GetPlayLength"));
    struct Params_GetPlayLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
