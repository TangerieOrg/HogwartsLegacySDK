#pragma once
#include <cstdint>
#include "AAbleHUD.hpp"
#pragma pack(push, 1)
class AAmbulatoryHUD : public AAbleHUD {
public:
    static AAmbulatoryHUD* StaticClass();
    void ToggleAmbulatoryHUD();
    void OnIntegrate();
}; // Size: 0x338
#pragma pack(pop)
