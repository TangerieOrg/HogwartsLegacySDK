#pragma once
#include <cstdint>
#include "UGizmoBaseTransformSource.hpp"
class USceneComponent;
#pragma pack(push, 1)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource {
public:
    USceneComponent* Component; // 0x48
    bool bModifyComponentOnTransform; // 0x50
    char pad_51[0x7];
    static UGizmoComponentWorldTransformSource* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
