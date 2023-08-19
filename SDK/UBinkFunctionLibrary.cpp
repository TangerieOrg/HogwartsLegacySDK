#include "FTimespan.hpp"
#include "UBinkFunctionLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UBinkFunctionLibrary* UBinkFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/BinkMediaPlayer.BinkFunctionLibrary");
    return (UBinkFunctionLibrary*)res;
}
FTimespan UBinkFunctionLibrary::BinkLoadingMovie_GetTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime"));
    struct Params_BinkLoadingMovie_GetTime {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_BinkLoadingMovie_GetTime params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FTimespan UBinkFunctionLibrary::BinkLoadingMovie_GetDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration"));
    struct Params_BinkLoadingMovie_GetDuration {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_BinkLoadingMovie_GetDuration params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
void UBinkFunctionLibrary::Bink_DrawOverlays() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays"));
    struct Params_Bink_DrawOverlays {
    }; // Size: 0x0
    Params_Bink_DrawOverlays params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
