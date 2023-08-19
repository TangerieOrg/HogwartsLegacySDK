#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_C_Manager_C.hpp"
#include "ABP_Sphinx_Puzzle_C_Part_C.hpp"
#include "ABP_Sphinx_Puzzle_C_Platform_C.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void ABP_Sphinx_Puzzle_C_Manager_C::OnPlatform_Event(bool bEntered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnPlatform_Event"));
    struct Params_OnPlatform_Event {
        bool bEntered; // 0x0
    }; // Size: 0x1
    Params_OnPlatform_Event params{};
    params.bEntered = (bool)bEntered;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::OnBroomFlightStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnBroomFlightStart"));
    struct Params_OnBroomFlightStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomFlightStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_C_Manager_C* ABP_Sphinx_Puzzle_C_Manager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C");
    return (ABP_Sphinx_Puzzle_C_Manager_C*)res;
}
void ABP_Sphinx_Puzzle_C_Manager_C::ExecuteUbergraph_BP_Sphinx_Puzzle_C_Manager(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2) {}
void ABP_Sphinx_Puzzle_C_Manager_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::Activated_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.Activated_Event"));
    struct Params_Activated_Event {
    }; // Size: 0x0
    Params_Activated_Event params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::ResetFail() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.ResetFail"));
    struct Params_ResetFail {
    }; // Size: 0x0
    Params_ResetFail params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::PlayerHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.PlayerHit"));
    struct Params_PlayerHit {
        UPrimitiveComponent* HitComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_PlayerHit params{};
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ABP_Sphinx_Puzzle_C_Manager_C::SetPlayer_Event(AActor* Player) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.SetPlayer_Event"));
    struct Params_SetPlayer_Event {
        AActor* Player; // 0x0
    }; // Size: 0x8
    Params_SetPlayer_Event params{};
    params.Player = (AActor*)Player;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::OnSwimmingStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnSwimmingStart"));
    struct Params_OnSwimmingStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnSwimmingStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::DeactivateAllPlatforms() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.DeactivateAllPlatforms"));
    struct Params_DeactivateAllPlatforms {
    }; // Size: 0x0
    Params_DeactivateAllPlatforms params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::OnBroomFlightEnd(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.OnBroomFlightEnd"));
    struct Params_OnBroomFlightEnd {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomFlightEnd params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::Flying_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.Flying_Event"));
    struct Params_Flying_Event {
    }; // Size: 0x0
    Params_Flying_Event params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::CreatureMountComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.CreatureMountComplete"));
    struct Params_CreatureMountComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CreatureMountComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_C_Manager_C::CreatureDismountComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/C-Platforms/BP_Sphinx_Puzzle_C_Manager.BP_Sphinx_Puzzle_C_Manager_C.CreatureDismountComplete"));
    struct Params_CreatureDismountComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CreatureDismountComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
