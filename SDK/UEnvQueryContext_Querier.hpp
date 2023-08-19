#pragma once
#include <cstdint>
#include "UEnvQueryContext.hpp"
#pragma pack(push, 1)
class UEnvQueryContext_Querier : public UEnvQueryContext {
public:
    static UEnvQueryContext_Querier* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
