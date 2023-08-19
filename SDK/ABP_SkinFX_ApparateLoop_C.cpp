#include "ABP_SkinFX_ApparateLoop_C.hpp"
#include "ABP_SkinFX_ApparateParent_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_SkinFX_ApparateLoop_C* ABP_SkinFX_ApparateLoop_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ApparateLoop.BP_SkinFX_ApparateLoop_C");
    return (ABP_SkinFX_ApparateLoop_C*)res;
}
void ABP_SkinFX_ApparateLoop_C::OnDisapparateFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateLoop.BP_SkinFX_ApparateLoop_C.OnDisapparateFinished"));
    struct Params_OnDisapparateFinished {
    }; // Size: 0x0
    Params_OnDisapparateFinished params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateLoop_C::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateLoop.BP_SkinFX_ApparateLoop_C.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateLoop_C::OnApparateFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateLoop.BP_SkinFX_ApparateLoop_C.OnApparateFinished"));
    struct Params_OnApparateFinished {
    }; // Size: 0x0
    Params_OnApparateFinished params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateLoop_C::ExecuteUbergraph_BP_SkinFX_ApparateLoop(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateLoop.BP_SkinFX_ApparateLoop_C.ExecuteUbergraph_BP_SkinFX_ApparateLoop"));
    struct Params_ExecuteUbergraph_BP_SkinFX_ApparateLoop {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_SkinFX_ApparateLoop params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
