#pragma once
#include <cstdint>
#include "UInterface.hpp"
struct FTransform;
#pragma pack(push, 1)
class UAnimInstance_RetrieveActorTransform : public UInterface {
public:
    static UAnimInstance_RetrieveActorTransform* StaticClass();
    bool RetreiveComponentTransform(FTransform& TransformInWorldSpace);
    void AssignComponentTransform(FTransform& TransformInWorldSpace);
}; // Size: 0x28
#pragma pack(pop)
