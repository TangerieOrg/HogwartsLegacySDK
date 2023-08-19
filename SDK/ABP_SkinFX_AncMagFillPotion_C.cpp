#include "ABP_SkinFX_AncMagFillPotion_C.hpp"
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_SkinFX_AncMagFillPotion_C* ABP_SkinFX_AncMagFillPotion_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_AncMagFillPotion.BP_SkinFX_AncMagFillPotion_C");
    return (ABP_SkinFX_AncMagFillPotion_C*)res;
}
void ABP_SkinFX_AncMagFillPotion_C::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_AncMagFillPotion.BP_SkinFX_AncMagFillPotion_C.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_AncMagFillPotion_C::SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_AncMagFillPotion.BP_SkinFX_AncMagFillPotion_C.SkinFXNotifyEnd"));
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
void ABP_SkinFX_AncMagFillPotion_C::ExecuteUbergraph_BP_SkinFX_AncMagFillPotion(int32_t EntryPoint, float K2Node_Event_currentTime, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_SkinFX_AncMagFillPotion_C::SkinFXNotifyRetrigger(float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_AncMagFillPotion.BP_SkinFX_AncMagFillPotion_C.SkinFXNotifyRetrigger"));
    struct Params_SkinFXNotifyRetrigger {
        float CurrentTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXNotifyRetrigger params{};
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
