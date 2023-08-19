#pragma once
#include <cstdint>
#include "AAmbulatoryHUD.hpp"
#pragma pack(push, 1)
class ACharacterStateHUD : public AAmbulatoryHUD {
public:
    static ACharacterStateHUD* StaticClass();
    void ToggleCharacterStateHUD();
}; // Size: 0x338
#pragma pack(pop)
