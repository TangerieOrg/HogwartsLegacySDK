#include "ASceneRigActor.hpp"
#include "FDialogueLineAndAudioFlags.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhxSceneRigBlueprintLibrary.hpp"
#include "USceneActionState_ClothOptions.hpp"
#include "USceneRig.hpp"
UPhxSceneRigBlueprintLibrary* UPhxSceneRigBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxSceneRigBlueprintLibrary");
    return (UPhxSceneRigBlueprintLibrary*)res;
}
USceneActionState_ClothOptions* UPhxSceneRigBlueprintLibrary::FindFirstSceneActionClothingOptionState(ASceneRigActor* InSceneRigActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhxSceneRigBlueprintLibrary.FindFirstSceneActionClothingOptionState"));
    struct Params_FindFirstSceneActionClothingOptionState {
        ASceneRigActor* InSceneRigActor; // 0x0
        USceneActionState_ClothOptions* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindFirstSceneActionClothingOptionState params{};
    params.InSceneRigActor = (ASceneRigActor*)InSceneRigActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USceneActionState_ClothOptions*)params.ReturnValue;
}
TArray<FDialogueLineAndAudioFlags> UPhxSceneRigBlueprintLibrary::FindDialogueEventReferences(USceneRig* SceneRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhxSceneRigBlueprintLibrary.FindDialogueEventReferences"));
    struct Params_FindDialogueEventReferences {
        USceneRig* SceneRig; // 0x0
        TArray<FDialogueLineAndAudioFlags> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_FindDialogueEventReferences params{};
    params.SceneRig = (USceneRig*)SceneRig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FDialogueLineAndAudioFlags>)params.ReturnValue;
}
void UPhxSceneRigBlueprintLibrary::FindCharacterReferencesInObject(UObject* InObject) {}
