#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGearOverride_Interface : public UInterface {
public:
    static UGearOverride_Interface* StaticClass();
    FName GetOutfitGear();
    FName GetNeckGear();
    FName GetHouse();
    FName GetHeadGear();
    FName GetHandGear();
    FName GetFaceGear();
    FName GetBackGear();
}; // Size: 0x28
#pragma pack(pop)
