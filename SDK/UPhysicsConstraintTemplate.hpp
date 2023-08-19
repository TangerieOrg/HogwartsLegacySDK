#pragma once
#include <cstdint>
#include "FConstraintInstance.hpp"
#include "FConstraintProfileProperties.hpp"
#include "FPhysicsConstraintProfileHandle.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPhysicsConstraintTemplate : public UObject {
public:
    FConstraintInstance DefaultInstance; // 0x28
    TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1f8
    FConstraintProfileProperties DefaultProfile; // 0x208
    static UPhysicsConstraintTemplate* StaticClass();
}; // Size: 0x320
#pragma pack(pop)
