#pragma once
#include <cstdint>
#include "ATransfigurationMovementStyleBase.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_TransfigurationMovementStyle_Base_C : public ATransfigurationMovementStyleBase {
public:
    USceneComponent* DefaultSceneRoot; // 0x5e0
    char pad_5e8[0x8];
    static ABP_TransfigurationMovementStyle_Base_C* StaticClass();
}; // Size: 0x5f0
#pragma pack(pop)
