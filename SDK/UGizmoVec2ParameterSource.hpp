#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGizmoVec2ParameterSource : public UInterface {
public:
    static UGizmoVec2ParameterSource* StaticClass();
    void SetParameter(FVector2D& NewValue);
    FVector2D GetParameter();
    void EndModify();
    void BeginModify();
}; // Size: 0x28
#pragma pack(pop)
