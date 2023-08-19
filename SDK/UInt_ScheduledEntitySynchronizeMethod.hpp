#pragma once
#include <cstdint>
#include "ESynchronizeMethod.hpp"
#include "UIntProvider.hpp"
#pragma pack(push, 1)
class UInt_ScheduledEntitySynchronizeMethod : public UIntProvider {
public:
    ESynchronizeMethod Value; // 0x28
    char pad_29[0x7];
    static UInt_ScheduledEntitySynchronizeMethod* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
