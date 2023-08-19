#pragma once
#include <cstdint>
#include "UInterface.hpp"
class USceneComponent;
#pragma pack(push, 1)
class UCreatureCage_Interface : public UInterface {
public:
    static UCreatureCage_Interface* StaticClass();
    bool IsCageOpen();
    USceneComponent* GetWalkoutTarget();
}; // Size: 0x28
#pragma pack(pop)
