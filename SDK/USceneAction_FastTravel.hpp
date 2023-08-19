#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_FastTravel : public USceneRigObjectActionBase {
public:
    UTransformProvider* Location; // 0xa0
    static USceneAction_FastTravel* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
