#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGizmoTransformSource : public UInterface {
public:
    static UGizmoTransformSource* StaticClass();
    void SetTransform(FTransform& NewTransform);
    FTransform GetTransform();
}; // Size: 0x28
#pragma pack(pop)
