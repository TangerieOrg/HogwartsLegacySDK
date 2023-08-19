#pragma once
#include <cstdint>
#include "UScreen.hpp"
class UVerticalBox;
class AFloo;
class UClass;
#pragma pack(push, 1)
class UFlooSelect : public UScreen {
public:
    UVerticalBox* menuBox; // 0x370
    AFloo* SourceFloo; // 0x378
    UClass* Button; // 0x380
    static UFlooSelect* StaticClass();
    void CreateButtonsC();
}; // Size: 0x388
#pragma pack(pop)
