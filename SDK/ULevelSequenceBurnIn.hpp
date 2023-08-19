#pragma once
#include <cstdint>
#include "FLevelSequencePlayerSnapshot.hpp"
#include "UUserWidget.hpp"
class ALevelSequenceActor;
class UClass;
class UObject;
#pragma pack(push, 1)
class ULevelSequenceBurnIn : public UUserWidget {
public:
    FLevelSequencePlayerSnapshot FrameInformation; // 0x268
    ALevelSequenceActor* LevelSequenceActor; // 0x320
    static ULevelSequenceBurnIn* StaticClass();
    void SetSettings(UObject* InSettings);
    UClass* GetSettingsClass();
}; // Size: 0x328
#pragma pack(pop)
