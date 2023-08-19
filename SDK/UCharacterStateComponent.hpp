#pragma once
#include <cstdint>
#include "FCharacterStateData.hpp"
#include "UBaseStateComponent.hpp"
#pragma pack(push, 1)
class UCharacterStateComponent : public UBaseStateComponent {
public:
    FCharacterStateData CharacterStateData; // 0x5a0
    static UCharacterStateComponent* StaticClass();
}; // Size: 0x820
#pragma pack(pop)
