#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTService_BlueprintBase.hpp"
class AActor;
class UAnimInstance;
class UBlackboardComponent;
#pragma pack(push, 1)
class UBTService_AvaAITree : public UBTService_BlueprintBase {
public:
    char pad_98[0x38];
    static UBTService_AvaAITree* StaticClass();
    void ServiceEnd(AActor* OwnerActor);
    void ServiceBegin(AActor* OwnerActor);
    void LeafNodeSwitcher(FGameplayTag InLeafNodeTag);
    FGameplayTag GetLastLeafNode();
    UBlackboardComponent* GetBlackboardComponent();
    UAnimInstance* GetAnimInstance();
    AActor* GetActorOwner();
    FGameplayTag GetActiveLeafNodeTag();
    FName GetActiveLeafNodeName();
    void Consume();
    void BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap);
}; // Size: 0xd0
#pragma pack(pop)
