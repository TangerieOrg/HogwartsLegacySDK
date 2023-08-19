#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UCurseInterface : public UInterface {
public:
    static UCurseInterface* StaticClass();
    void OnUncursed();
    void OnInteractWithCurse();
    void OnFailedToUncurse();
}; // Size: 0x28
#pragma pack(pop)
