#include "AGameModeBase.hpp"
#include "AUI_BP_FrontEndGameMode_C.hpp"
#include "USceneComponent.hpp"
AUI_BP_FrontEndGameMode_C* AUI_BP_FrontEndGameMode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/UI_BP_FrontEndGameMode.UI_BP_FrontEndGameMode_C");
    return (AUI_BP_FrontEndGameMode_C*)res;
}
