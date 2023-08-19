#include "ABP_SkinFX_GlowGraph_C.hpp"
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UTimelineComponent.hpp"
void ABP_SkinFX_GlowGraph_C::SkinFXInitialUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXInitialUpdate"));
    struct Params_SkinFXInitialUpdate {
    }; // Size: 0x0
    Params_SkinFXInitialUpdate params{};
    ProcessEvent(func, &params);
}
ABP_SkinFX_GlowGraph_C* ABP_SkinFX_GlowGraph_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C");
    return (ABP_SkinFX_GlowGraph_C*)res;
}
void ABP_SkinFX_GlowGraph_C::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_GlowGraph_C::EmissiveAmount__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.EmissiveAmount__FinishedFunc"));
    struct Params_EmissiveAmount__FinishedFunc {
    }; // Size: 0x0
    Params_EmissiveAmount__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_GlowGraph_C::EmissiveAmount__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.EmissiveAmount__UpdateFunc"));
    struct Params_EmissiveAmount__UpdateFunc {
    }; // Size: 0x0
    Params_EmissiveAmount__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_GlowGraph_C::SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyEnd"));
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
void ABP_SkinFX_GlowGraph_C::SkinFXNotifyKill() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyKill"));
    struct Params_SkinFXNotifyKill {
    }; // Size: 0x0
    Params_SkinFXNotifyKill params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_GlowGraph_C::SkinFXNotifyRetrigger(float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.SkinFXNotifyRetrigger"));
    struct Params_SkinFXNotifyRetrigger {
        float CurrentTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXNotifyRetrigger params{};
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_GlowGraph_C::ExecuteUbergraph_BP_SkinFX_GlowGraph(int32_t EntryPoint, ESkinFXEffectEndStyle K2Node_Event_endStyle, float K2Node_Event_currentTime_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_currentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_GlowGraph.BP_SkinFX_GlowGraph_C.ExecuteUbergraph_BP_SkinFX_GlowGraph"));
    struct Params_ExecuteUbergraph_BP_SkinFX_GlowGraph {
        int32_t EntryPoint; // 0x0
        ESkinFXEffectEndStyle K2Node_Event_endStyle; // 0x4
        char pad_5[0x3];
        float K2Node_Event_currentTime_1; // 0x8
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0xc
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0xd
        char pad_e[0x2];
        float K2Node_Event_currentTime; // 0x10
    }; // Size: 0x14
    Params_ExecuteUbergraph_BP_SkinFX_GlowGraph params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_endStyle = (ESkinFXEffectEndStyle)K2Node_Event_endStyle;
    params.K2Node_Event_currentTime_1 = (float)K2Node_Event_currentTime_1;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.K2Node_Event_currentTime = (float)K2Node_Event_currentTime;
    ProcessEvent(func, &params);
}
