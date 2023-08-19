#include "FAvaRootMotionWarper.hpp"
#include "FVector.hpp"
#include "UAnimSequenceBase.hpp"
#include "UAvaMotionWarpWindowFinder.hpp"
#include "UAvaMotionWarpingModifierConfig.hpp"
#include "UAvaMotionWarpingModifierConfig_Scale.hpp"
#include "UFunction.hpp"
UAvaMotionWarpingModifierConfig_Scale* UAvaMotionWarpingModifierConfig_Scale::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AvaMotionWarpingModifierConfig_Scale");
    return (UAvaMotionWarpingModifierConfig_Scale*)res;
}
void UAvaMotionWarpingModifierConfig_Scale::AddRootMotionModifierScale(FAvaRootMotionWarper& InMotionWarper, UAvaMotionWarpWindowFinder* InWindowFinder, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.AvaMotionWarpingModifierConfig_Scale.AddRootMotionModifierScale"));
    struct Params_AddRootMotionModifierScale {
        FAvaRootMotionWarper InMotionWarper; // 0x0
        UAvaMotionWarpWindowFinder* InWindowFinder; // 0x78
        UAnimSequenceBase* InAnimation; // 0x80
        float InStartTime; // 0x88
        float InEndTime; // 0x8c
        FVector InScale; // 0x90
    }; // Size: 0x9c
    Params_AddRootMotionModifierScale params{};
    params.InMotionWarper = (FAvaRootMotionWarper)InMotionWarper;
    params.InWindowFinder = (UAvaMotionWarpWindowFinder*)InWindowFinder;
    params.InAnimation = (UAnimSequenceBase*)InAnimation;
    params.InStartTime = (float)InStartTime;
    params.InEndTime = (float)InEndTime;
    params.InScale = (FVector)InScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMotionWarper = params.InMotionWarper;
}
