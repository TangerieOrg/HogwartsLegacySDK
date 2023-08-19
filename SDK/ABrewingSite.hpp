#pragma once
#include <cstdint>
#include "AInteractiveObjectActor.hpp"
#include "EBrewingState.hpp"
class UChildActorComponent;
class USkeletalMesh;
class UBrewingSiteState;
struct FBrewingRecipe;
#pragma pack(push, 1)
class ABrewingSite : public AInteractiveObjectActor {
public:
    char pad_298[0x30];
    ABrewingSite* LeftNeighbor; // 0x2c8
    ABrewingSite* RightNeighbor; // 0x2d0
    static ABrewingSite* StaticClass();
    static void SetBrewingNeighborsFromChildComponents(TArray<UChildActorComponent*>& ChildComponents, bool bLoopNeighbors);
    void OpenSiteUI();
    USkeletalMesh* GetCauldronSkeletalMesh();
    FName GetCauldronID();
    UBrewingSiteState* GetBrewingSiteState();
    void DestroyPotion(FName CollectorID);
    void CollectPotion(FName CollectorID, bool& bOutCollectedAnything, int32_t& OutYieldLeft);
    void BrewingSiteBecomeInactiveDelegate__DelegateSignature();
    void BrewingSiteBecomeActiveDelegate__DelegateSignature();
    void BP_NotifyBrewingStateChange(EBrewingState NewState, bool bIsInitialState);
    void BeginBrewingPotion(FBrewingRecipe& BrewingRecipe);
}; // Size: 0x2d8
#pragma pack(pop)
