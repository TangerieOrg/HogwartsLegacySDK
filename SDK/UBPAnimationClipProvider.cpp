#include "UAnimSequenceBase.hpp"
#include "UAnimationClipProvider.hpp"
#include "UBPAnimationClipProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBPAnimationClipProvider* UBPAnimationClipProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BPAnimationClipProvider");
    return (UBPAnimationClipProvider*)res;
}
bool UBPAnimationClipProvider::GetAnimationClipBP(UObject* Caller, UAnimSequenceBase*& OutAnimClip) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.BPAnimationClipProvider.GetAnimationClipBP"));
    struct Params_GetAnimationClipBP {
        UObject* Caller; // 0x0
        UAnimSequenceBase* OutAnimClip; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetAnimationClipBP params{};
    params.Caller = (UObject*)Caller;
    params.OutAnimClip = (UAnimSequenceBase*)OutAnimClip;
    ProcessEvent(func, &params);
    OutAnimClip = params.OutAnimClip;
    return (bool)params.ReturnValue;
}
