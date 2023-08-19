#include "ECameraShakePlaySpace.hpp"
#include "UCameraAnim.hpp"
#include "UCameraAnimInst.hpp"
#include "UFunction.hpp"
#include "UInterpGroupInst.hpp"
#include "UInterpTrackInstMove.hpp"
#include "UInterpTrackMove.hpp"
#include "UObject.hpp"
UCameraAnimInst* UCameraAnimInst::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraAnimInst");
    return (UCameraAnimInst*)res;
}
void UCameraAnimInst::Stop(bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraAnimInst.Stop"));
    struct Params_Stop {
        bool bImmediate; // 0x0
    }; // Size: 0x1
    Params_Stop params{};
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
}
void UCameraAnimInst::SetScale(float NewDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraAnimInst.SetScale"));
    struct Params_SetScale {
        float NewDuration; // 0x0
    }; // Size: 0x4
    Params_SetScale params{};
    params.NewDuration = (float)NewDuration;
    ProcessEvent(func, &params);
}
void UCameraAnimInst::SetDuration(float NewDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraAnimInst.SetDuration"));
    struct Params_SetDuration {
        float NewDuration; // 0x0
    }; // Size: 0x4
    Params_SetDuration params{};
    params.NewDuration = (float)NewDuration;
    ProcessEvent(func, &params);
}
