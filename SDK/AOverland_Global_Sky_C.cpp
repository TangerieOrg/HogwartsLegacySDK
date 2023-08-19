#include "ALevelScriptActor.hpp"
#include "AOverland_Global_Sky_C.hpp"
#include "APostProcessVolumeWithBlendDomain.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
AOverland_Global_Sky_C* AOverland_Global_Sky_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_Sky.Overland_Global_Sky_C");
    return (AOverland_Global_Sky_C*)res;
}
void AOverland_Global_Sky_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland_Global_Sky.Overland_Global_Sky_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AOverland_Global_Sky_C::ExecuteUbergraph_Overland_Global_Sky(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland_Global_Sky.Overland_Global_Sky_C.ExecuteUbergraph_Overland_Global_Sky"));
    struct Params_ExecuteUbergraph_Overland_Global_Sky {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_Overland_Global_Sky params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
