#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_I_ConfringoTarget_C.hpp"
#include "ABP_Sphinx_Puzzle_I_Manager_C.hpp"
#include "ABP_Sphinx_Puzzle_I_Part_C.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_Sphinx_Puzzle_I_Manager_C* ABP_Sphinx_Puzzle_I_Manager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Manager.BP_Sphinx_Puzzle_I_Manager_C");
    return (ABP_Sphinx_Puzzle_I_Manager_C*)res;
}
void ABP_Sphinx_Puzzle_I_Manager_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Manager.BP_Sphinx_Puzzle_I_Manager_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Manager_C::StoneDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Manager.BP_Sphinx_Puzzle_I_Manager_C.StoneDestroyed"));
    struct Params_StoneDestroyed {
    }; // Size: 0x0
    Params_StoneDestroyed params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_I_Manager_C::ExecuteUbergraph_BP_Sphinx_Puzzle_I_Manager(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t Temp_int_Variable, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void ABP_Sphinx_Puzzle_I_Manager_C::StoneRepaired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/I-ConfringoTargets/BP_Sphinx_Puzzle_I_Manager.BP_Sphinx_Puzzle_I_Manager_C.StoneRepaired"));
    struct Params_StoneRepaired {
    }; // Size: 0x0
    Params_StoneRepaired params{};
    ProcessEvent(func, &params);
}
