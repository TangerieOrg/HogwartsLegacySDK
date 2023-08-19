#pragma once
#include <cstdint>
#include "FCharacterStateHUDStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UCharacterStateHUDWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FCharacterStateHUDStyle CharacterStateHUDWidgetStyle; // 0x30
    static UCharacterStateHUDWidgetStyle* StaticClass();
}; // Size: 0x2cb0
#pragma pack(pop)
