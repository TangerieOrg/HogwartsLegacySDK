#pragma once
#include <cstdint>
#include "UScreen.hpp"
#pragma pack(push, 1)
class UBroomChallengeScreen : public UScreen {
public:
    FString RaceId; // 0x370
    static UBroomChallengeScreen* StaticClass();
}; // Size: 0x380
#pragma pack(pop)
