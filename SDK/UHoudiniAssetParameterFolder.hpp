#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter {
public:
    static UHoudiniAssetParameterFolder* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
