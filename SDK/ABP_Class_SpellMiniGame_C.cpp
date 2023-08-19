#include "AActor.hpp"
#include "ABP_Class_SpellMiniGame_C.hpp"
#include "FMissionID.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UScreen.hpp"
void ABP_Class_SpellMiniGame_C::OnMiniGameLoaded(UScreen* LoadedScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_Class_SpellMiniGame.BP_Class_SpellMiniGame_C.OnMiniGameLoaded"));
    struct Params_OnMiniGameLoaded {
        UScreen* LoadedScreen; // 0x0
    }; // Size: 0x8
    Params_OnMiniGameLoaded params{};
    params.LoadedScreen = (UScreen*)LoadedScreen;
    ProcessEvent(func, &params);
}
ABP_Class_SpellMiniGame_C* ABP_Class_SpellMiniGame_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_Class_SpellMiniGame.BP_Class_SpellMiniGame_C");
    return (ABP_Class_SpellMiniGame_C*)res;
}
void ABP_Class_SpellMiniGame_C::SpellComplete(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_Class_SpellMiniGame.BP_Class_SpellMiniGame_C.SpellComplete"));
    struct Params_SpellComplete {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_SpellComplete params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void ABP_Class_SpellMiniGame_C::StartSpellMiniGame() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_Class_SpellMiniGame.BP_Class_SpellMiniGame_C.StartSpellMiniGame"));
    struct Params_StartSpellMiniGame {
    }; // Size: 0x0
    Params_StartSpellMiniGame params{};
    ProcessEvent(func, &params);
}
void ABP_Class_SpellMiniGame_C::ExecuteUbergraph_BP_Class_SpellMiniGame(int32_t EntryPoint) {}
