#pragma once
#include <cstdint>
#include "FStencilManagerGroupName.hpp"
#include "USceneAction_StencilFXEnableInterface.hpp"
#pragma pack(push, 1)
class USceneAction_StencilFXGroups : public USceneAction_StencilFXEnableInterface {
public:
    TArray<FStencilManagerGroupName> Groups; // 0x88
    bool bExclusive; // 0x98
    bool bEnableStencilManager; // 0x99
    char pad_9a[0x6];
    static USceneAction_StencilFXGroups* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
