#pragma once
#include <cstdint>
#include "USceneAction_SetProperty.hpp"
class UVectorProvider;
#pragma pack(push, 1)
class USceneAction_SetVectorProperty : public USceneAction_SetProperty {
public:
    UVectorProvider* InputValue; // 0xb8
    static USceneAction_SetVectorProperty* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
