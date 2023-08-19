#include "ERootMotionRootLock\Type.hpp"
#include "FAlphaBlend.hpp"
#include "FBranchingPoint.hpp"
#include "FBranchingPointMarker.hpp"
#include "FCompositeSection.hpp"
#include "FMarkerSyncData.hpp"
#include "FSlotAnimationTrack.hpp"
#include "FTimeStretchCurve.hpp"
#include "UAnimCompositeBase.hpp"
#include "UAnimMontage.hpp"
#include "UFunction.hpp"
UAnimMontage* UAnimMontage::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimMontage");
    return (UAnimMontage*)res;
}
float UAnimMontage::GetDefaultBlendOutTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimMontage.GetDefaultBlendOutTime"));
    struct Params_GetDefaultBlendOutTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDefaultBlendOutTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
