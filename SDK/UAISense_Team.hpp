#pragma once
#include <cstdint>
#include "FAITeamStimulusEvent.hpp"
#include "UAISense.hpp"
#pragma pack(push, 1)
class UAISense_Team : public UAISense {
public:
    TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
    static UAISense_Team* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
