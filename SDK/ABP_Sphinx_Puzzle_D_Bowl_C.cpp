#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_D_Bowl_C.hpp"
#include "UBoxComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Sphinx_Puzzle_D_Bowl_C* ABP_Sphinx_Puzzle_D_Bowl_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/D-Ball/BP_Sphinx_Puzzle_D_Bowl.BP_Sphinx_Puzzle_D_Bowl_C");
    return (ABP_Sphinx_Puzzle_D_Bowl_C*)res;
}
