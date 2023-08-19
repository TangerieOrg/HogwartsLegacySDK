#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class ULocalLightComponent;
#pragma pack(push, 1)
class USceneActionState_BasicLight : public USceneRigActionState {
public:
    ULocalLightComponent* Light; // 0x50
    bool bSetTransform; // 0x58
    char pad_59[0x7];
    static USceneActionState_BasicLight* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
