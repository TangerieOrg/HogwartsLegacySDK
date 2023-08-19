#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UObject;
class USceneRigStageParameterBlock;
#pragma pack(push, 1)
class USceneParameterInterface : public UInterface {
public:
    static USceneParameterInterface* StaticClass();
    USceneRigStageParameterBlock* CreateParameterBlock(UObject* OuterObject);
}; // Size: 0x28
#pragma pack(pop)
