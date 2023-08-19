#include "AInfo.hpp"
#include "APlayerState.hpp"
#include "AWorldSettings.hpp"
#include "EVisibilityAggressiveness.hpp"
#include "FBroadphaseSettings.hpp"
#include "FInteriorSettings.hpp"
#include "FNetViewer.hpp"
#include "FReverbSettings.hpp"
#include "FVector.hpp"
#include "UAssetUserData.hpp"
#include "UBookmarkBase.hpp"
#include "UClass.hpp"
#include "UCullDistancePreset.hpp"
#include "UFunction.hpp"
#include "UNavigationSystemConfig.hpp"
#include "USoundMix.hpp"
AWorldSettings* AWorldSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WorldSettings");
    return (AWorldSettings*)res;
}
void AWorldSettings::OnRep_WorldGravityZ() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WorldSettings.OnRep_WorldGravityZ"));
    struct Params_OnRep_WorldGravityZ {
    }; // Size: 0x0
    Params_OnRep_WorldGravityZ params{};
    ProcessEvent(func, &params);
}
