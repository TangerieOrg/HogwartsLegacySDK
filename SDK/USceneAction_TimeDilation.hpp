#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class USceneAction_TimeDilation : public USceneRigActionBase {
public:
    UFloatProvider* DilationValueProvider; // 0x88
    static USceneAction_TimeDilation* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
