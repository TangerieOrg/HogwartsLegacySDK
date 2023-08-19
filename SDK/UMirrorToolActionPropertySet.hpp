#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet {
public:
    char pad_60[0x8];
    static UMirrorToolActionPropertySet* StaticClass();
    void Up();
    void ShiftToCenter();
    void Right();
    void Left();
    void Forward();
    void Down();
    void Backward();
}; // Size: 0x68
#pragma pack(pop)
