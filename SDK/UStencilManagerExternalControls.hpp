#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UStencilManagerExternalControl;
#pragma pack(push, 1)
class UStencilManagerExternalControls : public UDataAsset {
public:
    UStencilManagerExternalControl* SystemEnable; // 0x30
    char pad_38[0x50];
    static UStencilManagerExternalControls* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
