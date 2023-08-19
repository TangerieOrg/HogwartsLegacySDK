#pragma once
#include <cstdint>
#include "USceneAction_SetProperty.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class USceneAction_SetBoolProperty : public USceneAction_SetProperty {
public:
    UBoolProvider* InputValue; // 0xb8
    static USceneAction_SetBoolProperty* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
