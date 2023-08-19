#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FMissionID.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class UScreen;
class UObject;
#pragma pack(push, 1)
class ABP_Class_SpellMiniGame_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    FName Spell; // 0x258
    FMissionID Mission_ID; // 0x260
    FString Step_Name; // 0x268
    bool UseDefaultCamera; // 0x278
    char pad_279[0x7];
    static ABP_Class_SpellMiniGame_C* StaticClass();
    void OnMiniGameLoaded(UScreen* LoadedScreen);
    void SpellComplete(UObject* Caller, int32_t int);
    void StartSpellMiniGame();
    void ExecuteUbergraph_BP_Class_SpellMiniGame(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
