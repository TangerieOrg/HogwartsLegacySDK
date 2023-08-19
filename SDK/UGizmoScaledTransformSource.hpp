#pragma once
#include <cstdint>
#include "UGizmoBaseTransformSource.hpp"
#pragma pack(push, 1)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource {
public:
    char pad_48[0x98];
    static UGizmoScaledTransformSource* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
