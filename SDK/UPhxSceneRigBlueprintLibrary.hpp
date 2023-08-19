#pragma once
#include <cstdint>
#include "FDialogueLineAndAudioFlags.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ASceneRigActor;
class USceneActionState_ClothOptions;
class USceneRig;
class UObject;
#pragma pack(push, 1)
class UPhxSceneRigBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UPhxSceneRigBlueprintLibrary* StaticClass();
    static USceneActionState_ClothOptions* FindFirstSceneActionClothingOptionState(ASceneRigActor* InSceneRigActor);
    static TArray<FDialogueLineAndAudioFlags> FindDialogueEventReferences(USceneRig* SceneRig);
    static void FindCharacterReferencesInObject(UObject* InObject);
}; // Size: 0x28
#pragma pack(pop)
