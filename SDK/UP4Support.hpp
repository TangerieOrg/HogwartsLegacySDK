#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UP4Support : public UObject {
public:
    static UP4Support* StaticClass();
    static FString GetCurrentPerforceChangelist();
}; // Size: 0x28
#pragma pack(pop)
