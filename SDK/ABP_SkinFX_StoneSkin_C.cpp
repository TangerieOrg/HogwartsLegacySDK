#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ABP_SkinFX_StoneSkin_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UTimelineComponent.hpp"
void ABP_SkinFX_StoneSkin_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
ABP_SkinFX_StoneSkin_C* ABP_SkinFX_StoneSkin_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C");
    return (ABP_SkinFX_StoneSkin_C*)res;
}
void ABP_SkinFX_StoneSkin_C::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_StoneSkin_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_StoneSkin_C::SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.SkinFXNotifyEnd"));
    struct Params_SkinFXNotifyEnd {
        ESkinFXEffectEndStyle EndStyle; // 0x0
        char pad_1[0x3];
        float CurrentTime; // 0x4
    }; // Size: 0x8
    Params_SkinFXNotifyEnd params{};
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_StoneSkin_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_StoneSkin_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_StoneSkin_C::SkinFXNotifyRetrigger(float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.SkinFXNotifyRetrigger"));
    struct Params_SkinFXNotifyRetrigger {
        float CurrentTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXNotifyRetrigger params{};
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_StoneSkin_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_StoneSkin.BP_SkinFX_StoneSkin_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_StoneSkin_C::ExecuteUbergraph_BP_SkinFX_StoneSkin(int32_t EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
