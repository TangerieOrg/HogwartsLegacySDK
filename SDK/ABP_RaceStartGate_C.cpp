#include "ABP_RaceStartGate_C.hpp"
#include "ARace.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
ABP_RaceStartGate_C* ABP_RaceStartGate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/BroomRaces/Blueprints/BP_RaceStartGate.BP_RaceStartGate_C");
    return (ABP_RaceStartGate_C*)res;
}
void ABP_RaceStartGate_C::OnRaceFinish0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/BroomRaces/Blueprints/BP_RaceStartGate.BP_RaceStartGate_C.OnRaceFinish"));
    struct Params_OnRaceFinish {
    }; // Size: 0x0
    Params_OnRaceFinish params{};
    ProcessEvent(func, &params);
}
void ABP_RaceStartGate_C::OnRaceStart0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/BroomRaces/Blueprints/BP_RaceStartGate.BP_RaceStartGate_C.OnRaceStart"));
    struct Params_OnRaceStart {
    }; // Size: 0x0
    Params_OnRaceStart params{};
    ProcessEvent(func, &params);
}
void ABP_RaceStartGate_C::OnRaceAbandoned0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/BroomRaces/Blueprints/BP_RaceStartGate.BP_RaceStartGate_C.OnRaceAbandoned"));
    struct Params_OnRaceAbandoned {
    }; // Size: 0x0
    Params_OnRaceAbandoned params{};
    ProcessEvent(func, &params);
}
void ABP_RaceStartGate_C::ExecuteUbergraph_BP_RaceStartGate(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/BroomRaces/Blueprints/BP_RaceStartGate.BP_RaceStartGate_C.ExecuteUbergraph_BP_RaceStartGate"));
    struct Params_ExecuteUbergraph_BP_RaceStartGate {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_RaceStartGate params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
