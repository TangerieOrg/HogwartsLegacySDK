#pragma once
#include <cstdint>
#include "UObject.hpp"
class UHint;
class UGameLogicObject;
#pragma pack(push, 1)
class UHintManager : public UObject {
public:
    TArray<UHint*> Hints; // 0x28
    UGameLogicObject* GameLogicObject; // 0x38
    static UHintManager* StaticClass();
    void OnSaveGameLoaded();
    void OnGameToBeSaved();
    static UGameLogicObject* GetHintManagerGameLogicObject();
    static UHint* GetHint(FString HintKey);
    static void DestroyHint(UHint* Hint);
    static UHint* CreateHint(FString Name);
}; // Size: 0x40
#pragma pack(pop)
