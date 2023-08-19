#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FVariantMapHandle.hpp"
#include "UBehaviorTreeComponent.hpp"
class UBehaviorTree;
class UBTTaskNode;
class AActor;
#pragma pack(push, 1)
class UBTCustomComponent : public UBehaviorTreeComponent {
public:
    UBehaviorTree* BehaviorTree; // 0x2a8
    FString GameplayTagPrefix; // 0x2b0
    bool bManageGameLogicBoolVars; // 0x2c0
    char pad_2c1[0x1f];
    FGameplayTag LeafNodeTag; // 0x2e0
    FGameplayTag LastLeafNodeTag; // 0x2e8
    UBTTaskNode* LastTaskNode; // 0x2f0
    bool bLockLeafNodeSwitcher; // 0x2f8
    bool bLeafNodeSwitcherQueued; // 0x2f9
    char pad_2fa[0x2];
    FGameplayTag LeafNodeTagDuringLock; // 0x2fc
    bool bSubtree; // 0x304
    char pad_305[0x83];
    static UBTCustomComponent* StaticClass();
    void OnCharacterLoadComplete(AActor* Actor);
    void LeafNodeSwitcher(FGameplayTag InLeafNodeTag);
    FGameplayTag GetGameplayTagFromActiveLeafNode();
    static FVariantMapHandle BroadcastAction_Actor(AActor* OwnerActor, FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap);
    FVariantMapHandle BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap);
}; // Size: 0x388
#pragma pack(pop)
