#pragma once
#include <cstdint>
#include "UMapScreenBase.hpp"
class UMapHogsmeade;
#pragma pack(push, 1)
class UHogsmeadeMapScreen : public UMapScreenBase {
public:
    UMapHogsmeade* HogsmeadeMap; // 0x4d8
    static UHogsmeadeMapScreen* StaticClass();
    UMapHogsmeade* GetMap();
}; // Size: 0x4e0
#pragma pack(pop)
