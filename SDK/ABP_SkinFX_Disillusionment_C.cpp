#include "AActor.hpp"
#include "ABP_SkinFX_Disillusionment_C.hpp"
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
void ABP_SkinFX_Disillusionment_C::ExecuteUbergraph_BP_SkinFX_Disillusionment(int32_t EntryPoint, AActor* CallFunc_SkinFXGetAffectedActor_AffectedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_Disillusionment.BP_SkinFX_Disillusionment_C.ExecuteUbergraph_BP_SkinFX_Disillusionment"));
    struct Params_ExecuteUbergraph_BP_SkinFX_Disillusionment {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_SkinFXGetAffectedActor_AffectedActor; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_BP_SkinFX_Disillusionment params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_SkinFXGetAffectedActor_AffectedActor = (AActor*)CallFunc_SkinFXGetAffectedActor_AffectedActor;
    ProcessEvent(func, &params);
}
ABP_SkinFX_Disillusionment_C* ABP_SkinFX_Disillusionment_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Disillusionment.BP_SkinFX_Disillusionment_C");
    return (ABP_SkinFX_Disillusionment_C*)res;
}
void ABP_SkinFX_Disillusionment_C::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_Disillusionment.BP_SkinFX_Disillusionment_C.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_Disillusionment_C::SkinFXNotifyKill() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_Disillusionment.BP_SkinFX_Disillusionment_C.SkinFXNotifyKill"));
    struct Params_SkinFXNotifyKill {
    }; // Size: 0x0
    Params_SkinFXNotifyKill params{};
    ProcessEvent(func, &params);
}
