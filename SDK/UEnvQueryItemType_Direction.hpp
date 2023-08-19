#pragma once
#include <cstdint>
#include "UEnvQueryItemType_VectorBase.hpp"
#pragma pack(push, 1)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase {
public:
    static UEnvQueryItemType_Direction* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
