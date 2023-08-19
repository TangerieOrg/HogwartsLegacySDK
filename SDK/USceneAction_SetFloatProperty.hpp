#pragma once
#include <cstdint>
#include "USceneAction_SetProperty.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class USceneAction_SetFloatProperty : public USceneAction_SetProperty {
public:
    UFloatProvider* InputValue; // 0xb8
    static USceneAction_SetFloatProperty* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
