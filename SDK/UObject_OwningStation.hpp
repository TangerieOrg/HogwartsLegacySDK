#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UObject_OwningStation : public UActorProvider {
public:
    UActorProvider* FindOwningStationFor; // 0x38
    static UObject_OwningStation* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
