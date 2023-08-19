#pragma once
#include <cstdint>
#include "FGizmoVec2ParameterChange.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource {
public:
    FVector2D Value; // 0x48
    FGizmoVec2ParameterChange LastChange; // 0x50
    static UGizmoLocalVec2ParameterSource* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
