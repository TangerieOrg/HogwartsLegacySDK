#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ABP_SkinFX_MaximaPotion_C.hpp"
#include "AMunitionType_Base.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimelineComponent.hpp"
ABP_SkinFX_MaximaPotion_C* ABP_SkinFX_MaximaPotion_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C");
    return (ABP_SkinFX_MaximaPotion_C*)res;
}
void ABP_SkinFX_MaximaPotion_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_MaximaPotion_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_MaximaPotion_C::MunitionCreatedWithData(UObject* Caller, AMunitionType_Base* MunitionType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.MunitionCreatedWithData"));
    struct Params_MunitionCreatedWithData {
        UObject* Caller; // 0x0
        AMunitionType_Base* MunitionType; // 0x8
    }; // Size: 0x10
    Params_MunitionCreatedWithData params{};
    params.Caller = (UObject*)Caller;
    params.MunitionType = (AMunitionType_Base*)MunitionType;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_MaximaPotion_C::ExecuteUbergraph_BP_SkinFX_MaximaPotion(int32_t EntryPoint) {}
void ABP_SkinFX_MaximaPotion_C::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_MaximaPotion_C::SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.SkinFXNotifyEnd"));
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
void ABP_SkinFX_MaximaPotion_C::SkinFXNotifyRetrigger(float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_MaximaPotion.BP_SkinFX_MaximaPotion_C.SkinFXNotifyRetrigger"));
    struct Params_SkinFXNotifyRetrigger {
        float CurrentTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXNotifyRetrigger params{};
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
