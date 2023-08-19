#pragma once
#include <cstdint>
#include "UEnvQueryContext.hpp"
#pragma pack(push, 1)
class UEnvQueryContext_Item : public UEnvQueryContext {
public:
    static UEnvQueryContext_Item* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
