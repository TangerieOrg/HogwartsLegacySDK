#pragma once
#include <cstdint>
#include "ESeasonEnum.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USeasonChanger : public UObject {
public:
    static USeasonChanger* StaticClass();
    static void SetCurrentSeason(ESeasonEnum NewSeason);
}; // Size: 0x28
#pragma pack(pop)
