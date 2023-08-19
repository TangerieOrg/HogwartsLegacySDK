#pragma once
#include <cstdint>
#include "FStencilManagerGroupName.hpp"
#include "USceneAction_StencilFXEnableInterface.hpp"
#pragma pack(push, 1)
class USceneAction_StencilFXDisableAll : public USceneAction_StencilFXEnableInterface {
public:
    TArray<FStencilManagerGroupName> ExceptGroups; // 0x88
    static USceneAction_StencilFXDisableAll* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
