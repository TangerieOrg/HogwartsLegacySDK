#pragma once
#include <cstdint>
#include "UScreen.hpp"
#pragma pack(push, 1)
class URevelioPageScreen : public UScreen {
public:
    static URevelioPageScreen* StaticClass();
    void SetRevelioPageID(FName PageID);
}; // Size: 0x370
#pragma pack(pop)
