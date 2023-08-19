#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_A_Crystal_C.hpp"
#include "ABP_Sphinx_Puzzle_A_GlowBugs_C.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Sphinx_Puzzle_A_Crystal_C::Dropped_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Dropped_Event"));
    struct Params_Dropped_Event {
    }; // Size: 0x0
    Params_Dropped_Event params{};
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_A_Crystal_C* ABP_Sphinx_Puzzle_A_Crystal_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C");
    return (ABP_Sphinx_Puzzle_A_Crystal_C*)res;
}
void ABP_Sphinx_Puzzle_A_Crystal_C::Build(int32_t Mesh, int32_t CallFunc_Clamp_ReturnValue) {}
void ABP_Sphinx_Puzzle_A_Crystal_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Crystal_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Crystal_C::PuzzleSolved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.PuzzleSolved"));
    struct Params_PuzzleSolved {
    }; // Size: 0x0
    Params_PuzzleSolved params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Crystal_C::Grabbed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Grabbed_Event"));
    struct Params_Grabbed_Event {
    }; // Size: 0x0
    Params_Grabbed_Event params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Crystal_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Crystal_C::LoadSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.LoadSolution"));
    struct Params_LoadSolution {
    }; // Size: 0x0
    Params_LoadSolution params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Crystal_C::BndEvt__BP_Sphinx_Puzzle_A_Crystal_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.BndEvt__BP_Sphinx_Puzzle_A_Crystal_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_Sphinx_Puzzle_A_Crystal_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_Sphinx_Puzzle_A_Crystal_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Sphinx_Puzzle_A_Crystal_C::ExecuteUbergraph_BP_Sphinx_Puzzle_A_Crystal(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void ABP_Sphinx_Puzzle_A_Crystal_C::Complete__DelegateSignature(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Crystal.BP_Sphinx_Puzzle_A_Crystal_C.Complete__DelegateSignature"));
    struct Params_Complete__DelegateSignature {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_Complete__DelegateSignature params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
