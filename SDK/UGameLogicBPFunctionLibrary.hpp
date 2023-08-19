#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UGameLogicObject;
#pragma pack(push, 1)
class UGameLogicBPFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UGameLogicBPFunctionLibrary* StaticClass();
    static UGameLogicObject* SpawnAndAttachToGameLogicObject(UObject* InBlueprint);
    static void DetachFromGameLogicEvents(UObject* InputReceiver, UGameLogicObject* GameLogicObject);
    static void AttachToGameLogicEvents(UObject* InputReceiver, UGameLogicObject* GameLogicObject);
}; // Size: 0x28
#pragma pack(pop)
