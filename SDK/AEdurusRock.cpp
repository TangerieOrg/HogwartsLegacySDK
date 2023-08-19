#include "AEdurusRock.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
void AEdurusRock::SetRockLaunchDelay(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EdurusRock.SetRockLaunchDelay"));
    struct Params_SetRockLaunchDelay {
        float Time; // 0x0
    }; // Size: 0x4
    Params_SetRockLaunchDelay params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
AEdurusRock* AEdurusRock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EdurusRock");
    return (AEdurusRock*)res;
}
void AEdurusRock::SetRockIdleLocation(FVector TargetLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EdurusRock.SetRockIdleLocation"));
    struct Params_SetRockIdleLocation {
        FVector TargetLoc; // 0x0
    }; // Size: 0xc
    Params_SetRockIdleLocation params{};
    params.TargetLoc = (FVector)TargetLoc;
    ProcessEvent(func, &params);
}
void AEdurusRock::LaunchRock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EdurusRock.LaunchRock"));
    struct Params_LaunchRock {
    }; // Size: 0x0
    Params_LaunchRock params{};
    ProcessEvent(func, &params);
}
