#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ABP_SkinFX_Thunderbrew_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_SkinFX_Thunderbrew_C* ABP_SkinFX_Thunderbrew_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Thunderbrew.BP_SkinFX_Thunderbrew_C");
    return (ABP_SkinFX_Thunderbrew_C*)res;
}
void ABP_SkinFX_Thunderbrew_C::ExecuteUbergraph_BP_SkinFX_Thunderbrew(int32_t EntryPoint, float K2Node_Event_currentTime, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_SkinFX_Thunderbrew_C::SkinFXNotifyRetrigger(float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_Thunderbrew.BP_SkinFX_Thunderbrew_C.SkinFXNotifyRetrigger"));
    struct Params_SkinFXNotifyRetrigger {
        float CurrentTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXNotifyRetrigger params{};
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_Thunderbrew_C::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_Thunderbrew.BP_SkinFX_Thunderbrew_C.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
