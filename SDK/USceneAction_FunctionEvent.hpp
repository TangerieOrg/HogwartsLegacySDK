#pragma once
#include <cstdint>
#include "FSceneActionFunctionEventReference.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_FunctionEvent : public USceneRigObjectActionBase {
public:
    FSceneActionFunctionEventReference FunctionReference; // 0xa0
    static USceneAction_FunctionEvent* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
