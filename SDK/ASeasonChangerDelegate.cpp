#include "AActor.hpp"
#include "ASeasonChangerDelegate.hpp"
#include "ESeasonOverride.hpp"
ASeasonChangerDelegate* ASeasonChangerDelegate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SeasonChangerDelegate");
    return (ASeasonChangerDelegate*)res;
}
