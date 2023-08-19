#pragma once
#include <cstdint>
#include "UObject.hpp"
class ARace;
#pragma pack(push, 1)
class URaceManager : public UObject {
public:
    TArray<void*> RegisteredRaces; // 0x28
    char pad_38[0x8];
    static URaceManager* StaticClass();
    ARace* StartRace(FString RaceName, bool bIsMission);
    ARace* GetRaceFromID(FString RaceId);
    ARace* GetActiveRace();
    static URaceManager* Get();
}; // Size: 0x40
#pragma pack(pop)
