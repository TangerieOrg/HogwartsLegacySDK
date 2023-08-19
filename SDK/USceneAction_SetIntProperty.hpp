#pragma once
#include <cstdint>
#include "USceneAction_SetProperty.hpp"
class UIntProvider;
#pragma pack(push, 1)
class USceneAction_SetIntProperty : public USceneAction_SetProperty {
public:
    UIntProvider* InputValue; // 0xb8
    static USceneAction_SetIntProperty* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
