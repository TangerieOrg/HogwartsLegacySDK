#include "ANavigationRedirectionVolume.hpp"
#include "AVolume.hpp"
#include "ESubLevelID.hpp"
#include "FVector.hpp"
ANavigationRedirectionVolume* ANavigationRedirectionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavigationRedirectionVolume");
    return (ANavigationRedirectionVolume*)res;
}
