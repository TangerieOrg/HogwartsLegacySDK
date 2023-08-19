#pragma once
#include <cstdint>
#include "UEnvQueryItemType_ActorBase.hpp"
#pragma pack(push, 1)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase {
public:
    static UEnvQueryItemType_Actor* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
