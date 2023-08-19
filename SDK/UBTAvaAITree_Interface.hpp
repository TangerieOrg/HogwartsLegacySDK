#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FInputContextWithType.hpp"
#include "FVariantMapHandle.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBTAvaAITree_Interface : public UInterface {
public:
    static UBTAvaAITree_Interface* StaticClass();
    void SetManagedContext(FInputContextWithType InContext, bool bFlag);
    void LeafNodeSwitcher(FGameplayTag InLeafNodeTag);
    bool GetManagedContext(FInputContextWithType InContext);
    FGameplayTag GetLastLeafNode();
    void Consume();
    void BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap);
}; // Size: 0x28
#pragma pack(pop)
