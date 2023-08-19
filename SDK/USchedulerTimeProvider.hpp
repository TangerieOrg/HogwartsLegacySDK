#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
#pragma pack(push, 1)
class USchedulerTimeProvider : public UBaseProvider {
public:
    static USchedulerTimeProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
