#include "UAnimationClipProvider.hpp"
#include "UAnimationIndexedClipProvider.hpp"
#include "UFunction.hpp"
UAnimationIndexedClipProvider* UAnimationIndexedClipProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationIndexedClipProvider");
    return (UAnimationIndexedClipProvider*)res;
}
void UAnimationIndexedClipProvider::SetIndex(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationIndexedClipProvider.SetIndex"));
    struct Params_SetIndex {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetIndex params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
int32_t UAnimationIndexedClipProvider::GetIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationIndexedClipProvider.GetIndex"));
    struct Params_GetIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
