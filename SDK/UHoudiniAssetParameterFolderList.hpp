#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter {
public:
    static UHoudiniAssetParameterFolderList* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
