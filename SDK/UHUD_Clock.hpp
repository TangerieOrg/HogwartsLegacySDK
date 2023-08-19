#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UHUD_Clock : public UUserWidget {
public:
    char pad_268[0x8];
    static UHUD_Clock* StaticClass();
    void Setup();
    void OnTimeChanged(float Hour, float Minute);
}; // Size: 0x270
#pragma pack(pop)
