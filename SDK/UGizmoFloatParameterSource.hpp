#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGizmoFloatParameterSource : public UInterface {
public:
    static UGizmoFloatParameterSource* StaticClass();
    void SetParameter(float NewValue);
    float GetParameter();
    void EndModify();
    void BeginModify();
}; // Size: 0x28
#pragma pack(pop)
