#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UObject;
#pragma pack(push, 1)
class UMotionMatcherBPInterface : public UInterface {
public:
    static UMotionMatcherBPInterface* StaticClass();
    UObject* GetGoalDelegate();
}; // Size: 0x28
#pragma pack(pop)
