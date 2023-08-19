#pragma once
#include <cstdint>
#include "FDBLocationReference.hpp"
#include "UTransformProvider.hpp"
class UStringProvider;
#pragma pack(push, 1)
class UTransform_DBLocation : public UTransformProvider {
public:
    bool bUseBoundParameter; // 0x28
    char pad_29[0x7];
    UStringProvider* LocationNameProvider; // 0x30
    FDBLocationReference Location; // 0x38
    static UTransform_DBLocation* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
