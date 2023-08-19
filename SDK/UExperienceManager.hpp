#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UExperienceManager : public UObject {
public:
    char pad_28[0x80];
    static UExperienceManager* StaticClass();
    void SetLevelBounds(int32_t i_level, int32_t& o_startPoints, int32_t& o_endPoints);
    void SetExperienceLevel(int32_t NewLevel);
    void OnSaveGameLoaded();
    void OnNewGame(UObject* Caller, bool IsInIntro);
    void OnGameToBeSaved();
    int32_t GetExperiencePoints();
    int32_t GetExperienceLevelStartPoints();
    int32_t GetExperienceLevelEndPoints();
    int32_t GetExperienceLevel();
    static UExperienceManager* Get();
    void GainExperienceByAction(FString ExperienceAction);
    void AddExperience(int32_t Points, FString Source, FString source_detail);
}; // Size: 0xa8
#pragma pack(pop)
