#include "AHN_BB_Nav_C.hpp"
#include "ALevelScriptActor.hpp"
#include "AStaticMeshActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
AHN_BB_Nav_C* AHN_BB_Nav_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BB_Nav.HN_BB_Nav_C");
    return (AHN_BB_Nav_C*)res;
}
void AHN_BB_Nav_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BB_Nav.HN_BB_Nav_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AHN_BB_Nav_C::ExecuteUbergraph_HN_BB_Nav(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BB_Nav.HN_BB_Nav_C.ExecuteUbergraph_HN_BB_Nav"));
    struct Params_ExecuteUbergraph_HN_BB_Nav {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_HN_BB_Nav params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
