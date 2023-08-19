#include "AActor.hpp"
#include "ARacePlatform.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
ARacePlatform* ARacePlatform::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RacePlatform");
    return (ARacePlatform*)res;
}
void ARacePlatform::OnPlatformUnlocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RacePlatform.OnPlatformUnlocked"));
    struct Params_OnPlatformUnlocked {
    }; // Size: 0x0
    Params_OnPlatformUnlocked params{};
    ProcessEvent(func, &params);
}
void ARacePlatform::OnPlatformLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RacePlatform.OnPlatformLocked"));
    struct Params_OnPlatformLocked {
    }; // Size: 0x0
    Params_OnPlatformLocked params{};
    ProcessEvent(func, &params);
}
