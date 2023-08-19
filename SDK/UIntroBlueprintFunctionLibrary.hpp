#pragma once
#include <cstdint>
#include "EIntroCheckpoint.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UIntroBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UIntroBlueprintFunctionLibrary* StaticClass();
    static void SetLoadingRootLevel(bool bLoadingRootLevel);
    static void SetCheating(bool bCheating);
    static bool IsLoadingRootLevel(bool bReset);
    static bool IsCheating();
    static void IntroStart(UObject* WorldContextObject);
    static void IntroSave(UObject* WorldContextObject, EIntroCheckpoint Checkpoint, FVector PlayerSpawnLocation);
    static void IntroEnd(UObject* WorldContextObject);
    static EIntroCheckpoint GetIntroCheckpoint();
}; // Size: 0x28
#pragma pack(pop)
