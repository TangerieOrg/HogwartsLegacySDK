#pragma once
#include <cstdint>
#include "UTimeRigInterval.hpp"
#pragma pack(push, 1)
class USceneRigActionBase : public UTimeRigInterval {
public:
    static USceneRigActionBase* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
