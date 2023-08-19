#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_BlueprintBase.hpp"
class UBlackboardComponent;
class UAnimInstance;
class AActor;
#pragma pack(push, 1)
class UBTTask_AvaAITree : public UBTTask_BlueprintBase {
public:
    char pad_a8[0x28];
    static UBTTask_AvaAITree* StaticClass();
    void LeafNodeSwitcher(FGameplayTag LeafNodeTag);
    void LeafNodeSwitched();
    FGameplayTag GetLastLeafNode();
    UBlackboardComponent* GetBlackboardComponent();
    UAnimInstance* GetAnimInstance();
    AActor* GetActorOwner();
    void ExitTask(AActor* OwnerActor);
    void Consume();
    void BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap);
}; // Size: 0xd0
#pragma pack(pop)
