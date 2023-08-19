#include "AActor.hpp"
#include "AHogwarts_C.hpp"
#include "ALevelScriptActor.hpp"
#include "AStaticMeshActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UAvaStreamingManager.hpp"
#include "UFunction.hpp"
#include "ULandscapeManager.hpp"
#include "ULevelStreaming.hpp"
#include "UUIManager.hpp"
void AHogwarts_C::ExecuteUbergraph_Hogwarts(int32_t EntryPoint, ULandscapeManager* CallFunc_Get_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevelAva_ReturnValue, bool CallFunc_IsLevelCritical_ReturnValue, ULandscapeManager* CallFunc_Get_ReturnValue_1, FString CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_2, UAvaStreamingManager* CallFunc_Get_ReturnValue_3, bool CallFunc_ForceLoadMaps_ReturnValue) {}
AHogwarts_C* AHogwarts_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Hogwarts_LevelInstance_6.Hogwarts_C");
    return (AHogwarts_C*)res;
}
void AHogwarts_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_LevelInstance_6.Hogwarts_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AHogwarts_C::StreamingComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_LevelInstance_6.Hogwarts_C.StreamingComplete"));
    struct Params_StreamingComplete {
    }; // Size: 0x0
    Params_StreamingComplete params{};
    ProcessEvent(func, &params);
}
void AHogwarts_C::OverlandLoaded__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_LevelInstance_6.Hogwarts_C.OverlandLoaded__DelegateSignature"));
    struct Params_OverlandLoaded__DelegateSignature {
    }; // Size: 0x0
    Params_OverlandLoaded__DelegateSignature params{};
    ProcessEvent(func, &params);
}
