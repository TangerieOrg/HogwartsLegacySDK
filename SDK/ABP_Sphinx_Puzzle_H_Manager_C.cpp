#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_H_Manager_C.hpp"
#include "ABP_Sphinx_Puzzle_H_Part_C.hpp"
#include "ABP_Sphinx_Puzzle_H_StupefyTarget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_Sphinx_Puzzle_H_Manager_C* ABP_Sphinx_Puzzle_H_Manager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C");
    return (ABP_Sphinx_Puzzle_H_Manager_C*)res;
}
void ABP_Sphinx_Puzzle_H_Manager_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_Manager_C::StoneDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C.StoneDestroyed"));
    struct Params_StoneDestroyed {
    }; // Size: 0x0
    Params_StoneDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_Manager_C::StoneRepaired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_Manager.BP_Sphinx_Puzzle_H_Manager_C.StoneRepaired"));
    struct Params_StoneRepaired {
    }; // Size: 0x0
    Params_StoneRepaired params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_Manager_C::ExecuteUbergraph_BP_Sphinx_Puzzle_H_Manager(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
