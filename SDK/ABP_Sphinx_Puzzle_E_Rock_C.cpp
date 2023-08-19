#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_E_Rock_C.hpp"
#include "ABP_Sphinx_Puzzle_E_Stack_C.hpp"
#include "ABiped_Player.hpp"
#include "APlayerCameraManager.hpp"
#include "ASpellTool.hpp"
#include "AStaticMeshActor.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "ECollisionResponse.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EObjectTypeQuery.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "URollingComponent.hpp"
#include "UScheduler.hpp"
#include "USkeletalMeshComponentBudgeted.hpp"
#include "USkinFXComponent.hpp"
#include "USpellToolRecord.hpp"
ABP_Sphinx_Puzzle_E_Rock_C* ABP_Sphinx_Puzzle_E_Rock_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C");
    return (ABP_Sphinx_Puzzle_E_Rock_C*)res;
}
void ABP_Sphinx_Puzzle_E_Rock_C::SetStaticMesh() {}
bool ABP_Sphinx_Puzzle_E_Rock_C::StartReveal(AActor* Instigator, bool ShowOccluded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.StartReveal"));
    struct Params_StartReveal {
        AActor* Instigator; // 0x0
        bool ShowOccluded; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_StartReveal params{};
    params.Instigator = (AActor*)Instigator;
    params.ShowOccluded = (bool)ShowOccluded;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Sphinx_Puzzle_E_Rock_C::SetIsSolving(bool IsSolving, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.SetIsSolving"));
    struct Params_SetIsSolving {
        bool IsSolving; // 0x0
        char pad_1[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x8
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_SetIsSolving params{};
    params.IsSolving = (bool)IsSolving;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::CheckForStaleLocation(float DeltaTime, bool& LocationIsStale, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.CheckForStaleLocation"));
    struct Params_CheckForStaleLocation {
        float DeltaTime; // 0x0
        bool LocationIsStale; // 0x4
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x5
        char pad_6[0x2];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x8
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0xc
        float CallFunc_Vector_DistanceSquared_ReturnValue; // 0x18
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_CheckForStaleLocation params{};
    params.DeltaTime = (float)DeltaTime;
    params.LocationIsStale = (bool)LocationIsStale;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Vector_DistanceSquared_ReturnValue = (float)CallFunc_Vector_DistanceSquared_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    LocationIsStale = params.LocationIsStale;
}
void ABP_Sphinx_Puzzle_E_Rock_C::FinalSolve() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.FinalSolve"));
    struct Params_FinalSolve {
    }; // Size: 0x0
    Params_FinalSolve params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::CheckForImminentZKill(FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.CheckForImminentZKill"));
    struct Params_CheckForImminentZKill {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        float CallFunc_BreakVector_X; // 0xc
        float CallFunc_BreakVector_Y; // 0x10
        float CallFunc_BreakVector_Z; // 0x14
        bool CallFunc_Not_PreBool_ReturnValue; // 0x18
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x19
        bool CallFunc_BooleanAND_ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_CheckForImminentZKill params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnAffectedBySpellEnd"));
    struct Params_OnAffectedBySpellEnd {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
    }; // Size: 0x40
    Params_OnAffectedBySpellEnd params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::ActivateGroupedRocks(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ActivateGroupedRocks"));
    struct Params_ActivateGroupedRocks {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t CallFunc_Array_Length_ReturnValue; // 0xc
        ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item; // 0x10
        bool CallFunc_Less_IntInt_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ActivateGroupedRocks params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (ABP_Sphinx_Puzzle_E_Rock_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnBeginRevealFade(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnBeginRevealFade"));
    struct Params_OnBeginRevealFade {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnBeginRevealFade params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::Start_Solve__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Start_Solve__DelegateSignature"));
    struct Params_Start_Solve__DelegateSignature {
    }; // Size: 0x0
    Params_Start_Solve__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnHiddenObjectHinted(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnHiddenObjectHinted"));
    struct Params_OnHiddenObjectHinted {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnHiddenObjectHinted params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnHiddenObjectRevealed(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnHiddenObjectRevealed"));
    struct Params_OnHiddenObjectRevealed {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnHiddenObjectRevealed params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnHitBySpell"));
    struct Params_OnHitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnHitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    ImpactDirection = params.ImpactDirection;
    Hit = params.Hit;
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnOverlappedBySpell"));
    struct Params_OnOverlappedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
        FVector MunitionLocation; // 0x40
    }; // Size: 0x4c
    Params_OnOverlappedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.MunitionLocation = (FVector)MunitionLocation;
    ProcessEvent(func, &params);
    MunitionLocation = params.MunitionLocation;
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::AllowTeleport() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.AllowTeleport"));
    struct Params_AllowTeleport {
    }; // Size: 0x0
    Params_AllowTeleport params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnAffectedBySpell"));
    struct Params_OnAffectedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x10
        USpellToolRecord* SpellToolRecord; // 0x20
        FName SpellType; // 0x28
        FGameplayTagContainer Impact; // 0x30
        FHitResult Hit; // 0x50
        FVector ImpactDirection; // 0xd8
    }; // Size: 0xe4
    Params_OnAffectedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_Sphinx_Puzzle_E_Rock_C::BeginSolving() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.BeginSolving"));
    struct Params_BeginSolving {
    }; // Size: 0x0
    Params_BeginSolving params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::BeginFlock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.BeginFlock"));
    struct Params_BeginFlock {
    }; // Size: 0x0
    Params_BeginFlock params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::EndFlock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.EndFlock"));
    struct Params_EndFlock {
    }; // Size: 0x0
    Params_EndFlock params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::PauseFlock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.PauseFlock"));
    struct Params_PauseFlock {
    }; // Size: 0x0
    Params_PauseFlock params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::StartMove() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.StartMove"));
    struct Params_StartMove {
    }; // Size: 0x0
    Params_StartMove params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::LoadSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.LoadSolution"));
    struct Params_LoadSolution {
    }; // Size: 0x0
    Params_LoadSolution params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::EndMove() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.EndMove"));
    struct Params_EndMove {
    }; // Size: 0x0
    Params_EndMove params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::PauseMove() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.PauseMove"));
    struct Params_PauseMove {
    }; // Size: 0x0
    Params_PauseMove params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::ResumeFlock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ResumeFlock"));
    struct Params_ResumeFlock {
    }; // Size: 0x0
    Params_ResumeFlock params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::OnEndReveal(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.OnEndReveal"));
    struct Params_OnEndReveal {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnEndReveal params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::Oppugno_Start__DelegateSignature(UPrimitiveComponent* HitComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Oppugno_Start__DelegateSignature"));
    struct Params_Oppugno_Start__DelegateSignature {
        UPrimitiveComponent* HitComp; // 0x0
    }; // Size: 0x8
    Params_Oppugno_Start__DelegateSignature params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::ExecuteUbergraph_BP_Sphinx_Puzzle_E_Rock(int32_t EntryPoint, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, bool CallFunc_Vector_IsZero_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_CheckForStaleLocation_LocationIsStale, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetAngularDamping_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, FVector K2Node_MathExpression_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue_1, FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetMass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector K2Node_MathExpression_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_EqualEqual_VectorVector_ReturnValue_2, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FGameplayTagContainer K2Node_Event_Impact, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_2, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact_1, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorInt_ReturnValue, FVector CallFunc_Multiply_VectorInt_ReturnValue_1, FVector CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_GetCameraLocation_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_4, AActor* K2Node_Event_Instigator_5, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_6, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_2, FVector K2Node_Event_MunitionLocation, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_7, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, AActor* K2Node_Event_Instigator_8, AActor* K2Node_Event_Instigator_9, AActor* K2Node_Event_Instigator_10, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float CallFunc_GetAngularDamping_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, float CallFunc_GetLinearDamping_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, AActor* K2Node_Event_Instigator, float CallFunc_GetLinearDamping_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, TArray<AActor*>& Temp_object_Variable, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_4, FName CallFunc_SkinFXName_name, FName CallFunc_SkinFXName_name_1, TArray<AActor*>& Temp_object_Variable_1, USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent, TArray<UPrimitiveComponent*>& CallFunc_SphereOverlapComponents_OutComponents, bool CallFunc_SphereOverlapComponents_ReturnValue, UPrimitiveComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, ECollisionEnabled::Type CallFunc_GetCollisionEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, UScheduler* CallFunc_Get_ReturnValue, UScheduler* CallFunc_Get_ReturnValue_1, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_5, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.ExecuteUbergraph_BP_Sphinx_Puzzle_E_Rock"));
    struct Params_ExecuteUbergraph_BP_Sphinx_Puzzle_E_Rock {
        int32_t EntryPoint; // 0x0
        FHitResult CallFunc_K2_SetActorLocation_SweepHitResult; // 0x4
        bool CallFunc_K2_SetActorLocation_ReturnValue; // 0x8c
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x8d
        bool CallFunc_Vector_IsZero_ReturnValue; // 0x8e
        bool K2Node_SwitchEnum_CmpSuccess; // 0x8f
        float K2Node_Event_DeltaSeconds; // 0x90
        bool CallFunc_CheckForStaleLocation_LocationIsStale; // 0x94
        char pad_95[0x3];
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x98
        float CallFunc_GetAngularDamping_ReturnValue; // 0xa4
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xa8
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0xac
        float CallFunc_VSize_ReturnValue; // 0xb8
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0xbc
        bool CallFunc_IsSimulatingPhysics_ReturnValue; // 0xbd
        char pad_be[0x2];
        FVector K2Node_MathExpression_ReturnValue; // 0xc0
        bool CallFunc_Vector_IsZero_ReturnValue_1; // 0xcc
        char pad_cd[0x3];
        FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue; // 0xd0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_1; // 0xdc
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0xe8
        char pad_e9[0x3];
        float CallFunc_Vector_Distance_ReturnValue; // 0xec
        FVector CallFunc_GetDirectionUnitVector_ReturnValue; // 0xf0
        FVector CallFunc_Normal_ReturnValue_1; // 0xfc
        float CallFunc_VSize_ReturnValue_1; // 0x108
        bool CallFunc_EqualEqual_VectorVector_ReturnValue_1; // 0x10c
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x10d
        char pad_10e[0x2];
        float CallFunc_GetMass_ReturnValue; // 0x110
        bool CallFunc_BooleanAND_ReturnValue; // 0x114
        char pad_115[0x3];
        FVector K2Node_MathExpression_ReturnValue_1; // 0x118
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_2; // 0x124
        bool CallFunc_EqualEqual_VectorVector_ReturnValue_2; // 0x130
        char pad_131[0x7];
        TArray<EObjectTypeQuery> K2Node_MakeArray_Array; // 0x138
        ASpellTool* K2Node_Event_SpellTool; // 0x148
        AActor* K2Node_Event_Instigator_1; // 0x150
        USpellToolRecord* K2Node_Event_SpellToolRecord; // 0x158
        FName K2Node_Event_SpellType; // 0x160
        FGameplayTagContainer K2Node_Event_Impact; // 0x168
        ASpellTool* K2Node_Event_SpellTool_1; // 0x188
        AActor* K2Node_Event_Instigator_2; // 0x190
        TArray<UInteractionArchitectAsset*> K2Node_Event_DataAssets; // 0x198
        USpellToolRecord* K2Node_Event_SpellToolRecord_1; // 0x1a8
        FName K2Node_Event_SpellType_1; // 0x1b0
        FGameplayTagContainer K2Node_Event_Impact_1; // 0x1b8
        FHitResult K2Node_Event_Hit; // 0x1d8
        FVector K2Node_Event_ImpactDirection; // 0x260
        bool K2Node_SwitchName_CmpSuccess; // 0x26c
        bool K2Node_SwitchName_CmpSuccess_1; // 0x26d
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x26e
        char pad_26f[0x1];
        FRotator CallFunc_GetCameraRotation_ReturnValue; // 0x270
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_3; // 0x27c
        FVector CallFunc_GetRightVector_ReturnValue; // 0x288
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x294
        FVector CallFunc_Multiply_VectorInt_ReturnValue; // 0x2a0
        FVector CallFunc_Multiply_VectorInt_ReturnValue_1; // 0x2ac
        FVector CallFunc_GetCameraLocation_ReturnValue; // 0x2b8
        bool CallFunc_IsValid_ReturnValue; // 0x2c4
        char pad_2c5[0x3];
        float CallFunc_BreakVector_X; // 0x2c8
        float CallFunc_BreakVector_Y; // 0x2cc
        float CallFunc_BreakVector_Z; // 0x2d0
        FVector CallFunc_GetCameraLocation_ReturnValue_1; // 0x2d4
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x2e0
        float CallFunc_Vector_Distance2D_ReturnValue; // 0x2e8
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x2ec
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x2ed
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x2ee
        char pad_2ef[0x1];
        AActor* K2Node_Event_Instigator_3; // 0x2f0
        AActor* K2Node_Event_Instigator_4; // 0x2f8
        AActor* K2Node_Event_Instigator_5; // 0x300
        ASpellTool* K2Node_Event_SpellTool_2; // 0x308
        AActor* K2Node_Event_Instigator_6; // 0x310
        USpellToolRecord* K2Node_Event_SpellToolRecord_2; // 0x318
        FName K2Node_Event_SpellType_2; // 0x320
        FGameplayTagContainer K2Node_Event_Impact_2; // 0x328
        FVector K2Node_Event_MunitionLocation; // 0x348
        char pad_354[0x4];
        ASpellTool* K2Node_Event_SpellTool_3; // 0x358
        AActor* K2Node_Event_Instigator_7; // 0x360
        USpellToolRecord* K2Node_Event_SpellToolRecord_3; // 0x368
        FName K2Node_Event_SpellType_3; // 0x370
        FHitResult K2Node_Event_Hit_1; // 0x378
        FVector K2Node_Event_ImpactDirection_1; // 0x400
        char pad_40c[0x4];
        AActor* K2Node_Event_Instigator_8; // 0x410
        AActor* K2Node_Event_Instigator_9; // 0x418
        AActor* K2Node_Event_Instigator_10; // 0x420
        int32_t Temp_int_Loop_Counter_Variable; // 0x428
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x42c
        int32_t Temp_int_Array_Index_Variable; // 0x430
        float CallFunc_GetAngularDamping_ReturnValue_1; // 0x434
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x438
        char pad_43c[0x4];
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue; // 0x440
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1; // 0x448
        float CallFunc_GetLinearDamping_ReturnValue; // 0x450
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x454
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x458
        bool CallFunc_Not_PreBool_ReturnValue; // 0x459
        char pad_45a[0x6];
        AActor* K2Node_Event_Instigator; // 0x460
        float CallFunc_GetLinearDamping_ReturnValue_1; // 0x468
        float CallFunc_Subtract_FloatFloat_ReturnValue_1; // 0x46c
        bool CallFunc_BooleanOR_ReturnValue; // 0x470
        char pad_471[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue_2; // 0x474
        bool CallFunc_IsValid_ReturnValue_1; // 0x478
        char pad_479[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x47c
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x480
        char pad_481[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x484
        float CallFunc_BreakVector_X_1; // 0x490
        float CallFunc_BreakVector_Y_1; // 0x494
        float CallFunc_BreakVector_Z_1; // 0x498
        float CallFunc_Add_FloatFloat_ReturnValue_3; // 0x49c
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x4a0
        char pad_4a1[0x3];
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x4a4
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x4b0
        char pad_4b1[0x3];
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x4b4
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x4c0
        FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult; // 0x4cc
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x554
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x555
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x556
        bool CallFunc_Greater_FloatFloat_ReturnValue_2; // 0x557
        TArray<AActor*> Temp_object_Variable; // 0x558
        FHitResult CallFunc_LineTraceSingle_OutHit; // 0x568
        bool CallFunc_LineTraceSingle_ReturnValue; // 0x5f0
        char pad_5f1[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2; // 0x5f8
        FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1; // 0x600
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3; // 0x688
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_4; // 0x690
        FName CallFunc_SkinFXName_name; // 0x698
        FName CallFunc_SkinFXName_name_1; // 0x6a0
        TArray<AActor*> Temp_object_Variable_1; // 0x6a8
        USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent; // 0x6b8
        TArray<UPrimitiveComponent*> CallFunc_SphereOverlapComponents_OutComponents; // 0x6c0
        bool CallFunc_SphereOverlapComponents_ReturnValue; // 0x6d0
        char pad_6d1[0x7];
        UPrimitiveComponent* CallFunc_Array_Get_Item; // 0x6d8
        int32_t CallFunc_Array_Length_ReturnValue; // 0x6e0
        ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue; // 0x6e4
        bool CallFunc_Less_IntInt_ReturnValue; // 0x6e5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x6e6
        bool CallFunc_BooleanAND_ReturnValue_3; // 0x6e7
        ECollisionEnabled::Type CallFunc_GetCollisionEnabled_ReturnValue; // 0x6e8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x6e9
        bool CallFunc_BooleanAND_ReturnValue_4; // 0x6ea
        char pad_6eb[0x5];
        UScheduler* CallFunc_Get_ReturnValue; // 0x6f0
        UScheduler* CallFunc_Get_ReturnValue_1; // 0x6f8
        float CallFunc_GetTotalSeconds_ReturnValue; // 0x700
        float CallFunc_GetTotalSeconds_ReturnValue_1; // 0x704
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x708
        bool CallFunc_Not_PreBool_ReturnValue_3; // 0x714
        bool CallFunc_BooleanAND_ReturnValue_5; // 0x715
        char pad_716[0x2];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x718
    }; // Size: 0x720
    Params_ExecuteUbergraph_BP_Sphinx_Puzzle_E_Rock params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_K2_SetActorLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetActorLocation_SweepHitResult;
    params.CallFunc_K2_SetActorLocation_ReturnValue = (bool)CallFunc_K2_SetActorLocation_ReturnValue;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    params.CallFunc_Vector_IsZero_ReturnValue = (bool)CallFunc_Vector_IsZero_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_CheckForStaleLocation_LocationIsStale = (bool)CallFunc_CheckForStaleLocation_LocationIsStale;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_GetAngularDamping_ReturnValue = (float)CallFunc_GetAngularDamping_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_VSize_ReturnValue = (float)CallFunc_VSize_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_IsSimulatingPhysics_ReturnValue = (bool)CallFunc_IsSimulatingPhysics_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (FVector)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Vector_IsZero_ReturnValue_1 = (bool)CallFunc_Vector_IsZero_ReturnValue_1;
    params.CallFunc_GetPhysicsLinearVelocity_ReturnValue = (FVector)CallFunc_GetPhysicsLinearVelocity_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_1;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_Vector_Distance_ReturnValue = (float)CallFunc_Vector_Distance_ReturnValue;
    params.CallFunc_GetDirectionUnitVector_ReturnValue = (FVector)CallFunc_GetDirectionUnitVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue_1 = (FVector)CallFunc_Normal_ReturnValue_1;
    params.CallFunc_VSize_ReturnValue_1 = (float)CallFunc_VSize_ReturnValue_1;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue_1 = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue_1;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GetMass_ReturnValue = (float)CallFunc_GetMass_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (FVector)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_2;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue_2 = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue_2;
    params.K2Node_MakeArray_Array = (TArray<EObjectTypeQuery>)K2Node_MakeArray_Array;
    params.K2Node_Event_SpellTool = (ASpellTool*)K2Node_Event_SpellTool;
    params.K2Node_Event_Instigator_1 = (AActor*)K2Node_Event_Instigator_1;
    params.K2Node_Event_SpellToolRecord = (USpellToolRecord*)K2Node_Event_SpellToolRecord;
    params.K2Node_Event_SpellType = (FName)K2Node_Event_SpellType;
    params.K2Node_Event_Impact = (FGameplayTagContainer)K2Node_Event_Impact;
    params.K2Node_Event_SpellTool_1 = (ASpellTool*)K2Node_Event_SpellTool_1;
    params.K2Node_Event_Instigator_2 = (AActor*)K2Node_Event_Instigator_2;
    params.K2Node_Event_DataAssets = (TArray<UInteractionArchitectAsset*>)K2Node_Event_DataAssets;
    params.K2Node_Event_SpellToolRecord_1 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_1;
    params.K2Node_Event_SpellType_1 = (FName)K2Node_Event_SpellType_1;
    params.K2Node_Event_Impact_1 = (FGameplayTagContainer)K2Node_Event_Impact_1;
    params.K2Node_Event_Hit = (FHitResult)K2Node_Event_Hit;
    params.K2Node_Event_ImpactDirection = (FVector)K2Node_Event_ImpactDirection;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.K2Node_SwitchName_CmpSuccess_1 = (bool)K2Node_SwitchName_CmpSuccess_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_GetCameraRotation_ReturnValue = (FRotator)CallFunc_GetCameraRotation_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_3 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_3;
    params.CallFunc_GetRightVector_ReturnValue = (FVector)CallFunc_GetRightVector_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.CallFunc_Multiply_VectorInt_ReturnValue = (FVector)CallFunc_Multiply_VectorInt_ReturnValue;
    params.CallFunc_Multiply_VectorInt_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorInt_ReturnValue_1;
    params.CallFunc_GetCameraLocation_ReturnValue = (FVector)CallFunc_GetCameraLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_GetCameraLocation_ReturnValue_1 = (FVector)CallFunc_GetCameraLocation_ReturnValue_1;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_Vector_Distance2D_ReturnValue = (float)CallFunc_Vector_Distance2D_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.K2Node_Event_Instigator_3 = (AActor*)K2Node_Event_Instigator_3;
    params.K2Node_Event_Instigator_4 = (AActor*)K2Node_Event_Instigator_4;
    params.K2Node_Event_Instigator_5 = (AActor*)K2Node_Event_Instigator_5;
    params.K2Node_Event_SpellTool_2 = (ASpellTool*)K2Node_Event_SpellTool_2;
    params.K2Node_Event_Instigator_6 = (AActor*)K2Node_Event_Instigator_6;
    params.K2Node_Event_SpellToolRecord_2 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_2;
    params.K2Node_Event_SpellType_2 = (FName)K2Node_Event_SpellType_2;
    params.K2Node_Event_Impact_2 = (FGameplayTagContainer)K2Node_Event_Impact_2;
    params.K2Node_Event_MunitionLocation = (FVector)K2Node_Event_MunitionLocation;
    params.K2Node_Event_SpellTool_3 = (ASpellTool*)K2Node_Event_SpellTool_3;
    params.K2Node_Event_Instigator_7 = (AActor*)K2Node_Event_Instigator_7;
    params.K2Node_Event_SpellToolRecord_3 = (USpellToolRecord*)K2Node_Event_SpellToolRecord_3;
    params.K2Node_Event_SpellType_3 = (FName)K2Node_Event_SpellType_3;
    params.K2Node_Event_Hit_1 = (FHitResult)K2Node_Event_Hit_1;
    params.K2Node_Event_ImpactDirection_1 = (FVector)K2Node_Event_ImpactDirection_1;
    params.K2Node_Event_Instigator_8 = (AActor*)K2Node_Event_Instigator_8;
    params.K2Node_Event_Instigator_9 = (AActor*)K2Node_Event_Instigator_9;
    params.K2Node_Event_Instigator_10 = (AActor*)K2Node_Event_Instigator_10;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetAngularDamping_ReturnValue_1 = (float)CallFunc_GetAngularDamping_ReturnValue_1;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_GetPlayerCameraManager_ReturnValue = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue_1 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_1;
    params.CallFunc_GetLinearDamping_ReturnValue = (float)CallFunc_GetLinearDamping_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.K2Node_Event_Instigator = (AActor*)K2Node_Event_Instigator;
    params.CallFunc_GetLinearDamping_ReturnValue_1 = (float)CallFunc_GetLinearDamping_ReturnValue_1;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_1 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_2 = (float)CallFunc_Add_FloatFloat_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_3 = (float)CallFunc_Add_FloatFloat_ReturnValue_3;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_K2_SetWorldLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldLocation_SweepHitResult;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_Greater_FloatFloat_ReturnValue_2 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_2;
    params.Temp_object_Variable = (TArray<AActor*>)Temp_object_Variable;
    params.CallFunc_LineTraceSingle_OutHit = (FHitResult)CallFunc_LineTraceSingle_OutHit;
    params.CallFunc_LineTraceSingle_ReturnValue = (bool)CallFunc_LineTraceSingle_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue_2 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_2;
    params.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetWorldLocation_SweepHitResult_1;
    params.CallFunc_GetObjectStateInfo_ReturnValue_3 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_3;
    params.CallFunc_GetObjectStateInfo_ReturnValue_4 = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue_4;
    params.CallFunc_SkinFXName_name = (FName)CallFunc_SkinFXName_name;
    params.CallFunc_SkinFXName_name_1 = (FName)CallFunc_SkinFXName_name_1;
    params.Temp_object_Variable_1 = (TArray<AActor*>)Temp_object_Variable_1;
    params.CallFunc_ActorStartSkinFX_skinFXComponent = (USkinFXComponent*)CallFunc_ActorStartSkinFX_skinFXComponent;
    params.CallFunc_SphereOverlapComponents_OutComponents = (TArray<UPrimitiveComponent*>)CallFunc_SphereOverlapComponents_OutComponents;
    params.CallFunc_SphereOverlapComponents_ReturnValue = (bool)CallFunc_SphereOverlapComponents_ReturnValue;
    params.CallFunc_Array_Get_Item = (UPrimitiveComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetCollisionResponseToChannel_ReturnValue = (ECollisionResponse)CallFunc_GetCollisionResponseToChannel_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_3 = (bool)CallFunc_BooleanAND_ReturnValue_3;
    params.CallFunc_GetCollisionEnabled_ReturnValue = (ECollisionEnabled::Type)CallFunc_GetCollisionEnabled_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_4 = (bool)CallFunc_BooleanAND_ReturnValue_4;
    params.CallFunc_Get_ReturnValue = (UScheduler*)CallFunc_Get_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UScheduler*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_GetTotalSeconds_ReturnValue = (float)CallFunc_GetTotalSeconds_ReturnValue;
    params.CallFunc_GetTotalSeconds_ReturnValue_1 = (float)CallFunc_GetTotalSeconds_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue_3 = (bool)CallFunc_Not_PreBool_ReturnValue_3;
    params.CallFunc_BooleanAND_ReturnValue_5 = (bool)CallFunc_BooleanAND_ReturnValue_5;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_Event_DataAssets = params.K2Node_Event_DataAssets;
    Temp_object_Variable_1 = params.Temp_object_Variable_1;
    Temp_object_Variable = params.Temp_object_Variable;
    CallFunc_SphereOverlapComponents_OutComponents = params.CallFunc_SphereOverlapComponents_OutComponents;
}
void ABP_Sphinx_Puzzle_E_Rock_C::Error__DelegateSignature(ABP_Sphinx_Puzzle_E_Rock_C* Rock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Error__DelegateSignature"));
    struct Params_Error__DelegateSignature {
        ABP_Sphinx_Puzzle_E_Rock_C* Rock; // 0x0
    }; // Size: 0x8
    Params_Error__DelegateSignature params{};
    params.Rock = (ABP_Sphinx_Puzzle_E_Rock_C*)Rock;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::Finished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Finished__DelegateSignature"));
    struct Params_Finished__DelegateSignature {
    }; // Size: 0x0
    Params_Finished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::Spell_End__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Spell_End__DelegateSignature"));
    struct Params_Spell_End__DelegateSignature {
    }; // Size: 0x0
    Params_Spell_End__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_Rock_C::Spell_Start__DelegateSignature(UPrimitiveComponent* HitComp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_Rock.BP_Sphinx_Puzzle_E_Rock_C.Spell_Start__DelegateSignature"));
    struct Params_Spell_Start__DelegateSignature {
        UPrimitiveComponent* HitComp; // 0x0
    }; // Size: 0x8
    Params_Spell_Start__DelegateSignature params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    ProcessEvent(func, &params);
}
