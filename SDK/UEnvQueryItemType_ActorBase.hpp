#pragma once
#include <cstdint>
#include "UEnvQueryItemType_VectorBase.hpp"
#pragma pack(push, 1)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase {
public:
    static UEnvQueryItemType_ActorBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
