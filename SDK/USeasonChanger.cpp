#include "ESeasonEnum.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USeasonChanger.hpp"
USeasonChanger* USeasonChanger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SeasonChanger");
    return (USeasonChanger*)res;
}
void USeasonChanger::SetCurrentSeason(ESeasonEnum NewSeason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SeasonChanger.SetCurrentSeason"));
    struct Params_SetCurrentSeason {
        ESeasonEnum NewSeason; // 0x0
    }; // Size: 0x1
    Params_SetCurrentSeason params{};
    params.NewSeason = (ESeasonEnum)NewSeason;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
