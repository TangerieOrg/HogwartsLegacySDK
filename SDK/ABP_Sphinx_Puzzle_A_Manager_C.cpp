#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_A_Crystal_C.hpp"
#include "ABP_Sphinx_Puzzle_A_Lumos_C.hpp"
#include "ABP_Sphinx_Puzzle_A_Manager_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_Sphinx_Puzzle_A_Manager_C* ABP_Sphinx_Puzzle_A_Manager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Manager.BP_Sphinx_Puzzle_A_Manager_C");
    return (ABP_Sphinx_Puzzle_A_Manager_C*)res;
}
void ABP_Sphinx_Puzzle_A_Manager_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Manager.BP_Sphinx_Puzzle_A_Manager_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Manager_C::Activated_Event(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Manager.BP_Sphinx_Puzzle_A_Manager_C.Activated_Event"));
    struct Params_Activated_Event {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_Activated_Event params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Manager_C::ExecuteUbergraph_BP_Sphinx_Puzzle_A_Manager(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
