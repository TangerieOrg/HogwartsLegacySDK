#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_B_Brazier_C.hpp"
#include "ABP_Sphinx_Puzzle_B_Manager_C.hpp"
#include "ABP_Sphinx_Puzzle_B_Part_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ABP_Sphinx_Puzzle_B_Manager_C::Restart_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Restart_Event"));
    struct Params_Restart_Event {
    }; // Size: 0x0
    Params_Restart_Event params{};
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_B_Manager_C* ABP_Sphinx_Puzzle_B_Manager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C");
    return (ABP_Sphinx_Puzzle_B_Manager_C*)res;
}
void ABP_Sphinx_Puzzle_B_Manager_C::Solved__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Solved__DelegateSignature"));
    struct Params_Solved__DelegateSignature {
    }; // Size: 0x0
    Params_Solved__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Manager_C::Fail_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Fail_Event"));
    struct Params_Fail_Event {
    }; // Size: 0x0
    Params_Fail_Event params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Manager_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Manager_C::Start__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Start__DelegateSignature"));
    struct Params_Start__DelegateSignature {
    }; // Size: 0x0
    Params_Start__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Manager_C::Lit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Manager.BP_Sphinx_Puzzle_B_Manager_C.Lit_Event"));
    struct Params_Lit_Event {
    }; // Size: 0x0
    Params_Lit_Event params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Manager_C::ExecuteUbergraph_BP_Sphinx_Puzzle_B_Manager(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2) {}
