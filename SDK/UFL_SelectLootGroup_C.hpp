#pragma once
#include <cstdint>
#include "EEnvironment\Type.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ULootDropComponent;
class UObject;
#pragma pack(push, 1)
class UFL_SelectLootGroup_C : public UBlueprintFunctionLibrary {
public:
    static UFL_SelectLootGroup_C* StaticClass();
    static void SelectLootGroup(ULootDropComponent* Loot, EEnvironment::Type Environment, FString Size, UObject* __WorldContext, FString LootString);
}; // Size: 0x28
#pragma pack(pop)
