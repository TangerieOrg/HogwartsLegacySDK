#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigStageParameterBlock : public UObject {
public:
    char pad_28[0x60];
    static USceneRigStageParameterBlock* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
