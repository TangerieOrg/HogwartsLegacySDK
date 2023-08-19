#pragma once
#include <cstdint>
#include "FGizmoFloatParameterChange.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource {
public:
    float Value; // 0x48
    FGizmoFloatParameterChange LastChange; // 0x4c
    char pad_54[0x4];
    static UGizmoLocalFloatParameterSource* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
