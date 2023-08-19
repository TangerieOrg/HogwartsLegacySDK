#include "ABrewingSite.hpp"
#include "AInteractiveObjectActor.hpp"
#include "EBrewingState.hpp"
#include "FBrewingRecipe.hpp"
#include "UBrewingSiteState.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMesh.hpp"
ABrewingSite* ABrewingSite::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BrewingSite");
    return (ABrewingSite*)res;
}
UBrewingSiteState* ABrewingSite::GetBrewingSiteState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.GetBrewingSiteState"));
    struct Params_GetBrewingSiteState {
        UBrewingSiteState* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBrewingSiteState params{};
    ProcessEvent(func, &params);
    return (UBrewingSiteState*)params.ReturnValue;
}
USkeletalMesh* ABrewingSite::GetCauldronSkeletalMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.GetCauldronSkeletalMesh"));
    struct Params_GetCauldronSkeletalMesh {
        USkeletalMesh* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCauldronSkeletalMesh params{};
    ProcessEvent(func, &params);
    return (USkeletalMesh*)params.ReturnValue;
}
void ABrewingSite::BP_NotifyBrewingStateChange(EBrewingState NewState, bool bIsInitialState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.BP_NotifyBrewingStateChange"));
    struct Params_BP_NotifyBrewingStateChange {
        EBrewingState NewState; // 0x0
        bool bIsInitialState; // 0x1
    }; // Size: 0x2
    Params_BP_NotifyBrewingStateChange params{};
    params.NewState = (EBrewingState)NewState;
    params.bIsInitialState = (bool)bIsInitialState;
    ProcessEvent(func, &params);
}
void ABrewingSite::SetBrewingNeighborsFromChildComponents(TArray<UChildActorComponent*>& ChildComponents, bool bLoopNeighbors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.SetBrewingNeighborsFromChildComponents"));
    struct Params_SetBrewingNeighborsFromChildComponents {
        TArray<UChildActorComponent*> ChildComponents; // 0x0
        bool bLoopNeighbors; // 0x10
    }; // Size: 0x11
    Params_SetBrewingNeighborsFromChildComponents params{};
    params.ChildComponents = (TArray<UChildActorComponent*>)ChildComponents;
    params.bLoopNeighbors = (bool)bLoopNeighbors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ChildComponents = params.ChildComponents;
}
void ABrewingSite::BrewingSiteBecomeActiveDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.BrewingSite.BrewingSiteBecomeActiveDelegate__DelegateSignature"));
    struct Params_BrewingSiteBecomeActiveDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_BrewingSiteBecomeActiveDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABrewingSite::OpenSiteUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.OpenSiteUI"));
    struct Params_OpenSiteUI {
    }; // Size: 0x0
    Params_OpenSiteUI params{};
    ProcessEvent(func, &params);
}
FName ABrewingSite::GetCauldronID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.GetCauldronID"));
    struct Params_GetCauldronID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCauldronID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABrewingSite::DestroyPotion(FName CollectorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.DestroyPotion"));
    struct Params_DestroyPotion {
        FName CollectorID; // 0x0
    }; // Size: 0x8
    Params_DestroyPotion params{};
    params.CollectorID = (FName)CollectorID;
    ProcessEvent(func, &params);
}
void ABrewingSite::CollectPotion(FName CollectorID, bool& bOutCollectedAnything, int32_t& OutYieldLeft) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.CollectPotion"));
    struct Params_CollectPotion {
        FName CollectorID; // 0x0
        bool bOutCollectedAnything; // 0x8
        char pad_9[0x3];
        int32_t OutYieldLeft; // 0xc
    }; // Size: 0x10
    Params_CollectPotion params{};
    params.CollectorID = (FName)CollectorID;
    params.bOutCollectedAnything = (bool)bOutCollectedAnything;
    params.OutYieldLeft = (int32_t)OutYieldLeft;
    ProcessEvent(func, &params);
    bOutCollectedAnything = params.bOutCollectedAnything;
    OutYieldLeft = params.OutYieldLeft;
}
void ABrewingSite::BrewingSiteBecomeInactiveDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.BrewingSite.BrewingSiteBecomeInactiveDelegate__DelegateSignature"));
    struct Params_BrewingSiteBecomeInactiveDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_BrewingSiteBecomeInactiveDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABrewingSite::BeginBrewingPotion(FBrewingRecipe& BrewingRecipe) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSite.BeginBrewingPotion"));
    struct Params_BeginBrewingPotion {
        FBrewingRecipe BrewingRecipe; // 0x0
    }; // Size: 0x40
    Params_BeginBrewingPotion params{};
    params.BrewingRecipe = (FBrewingRecipe)BrewingRecipe;
    ProcessEvent(func, &params);
    BrewingRecipe = params.BrewingRecipe;
}
