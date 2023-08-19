#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_HideTransfigurationObjects : public USceneRigActionBase {
public:
    TArray<UActorProvider*> AffectedBoundingVolumes; // 0x88
    bool bTransitionToHide; // 0x98
    bool bTransitionToShow; // 0x99
    char pad_9a[0x6];
    static USceneAction_HideTransfigurationObjects* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
